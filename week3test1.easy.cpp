#include<iostream>
#include<conio.h>
using namespace std;
class Node
{public:
    string data;
    Node*next;
    Node*prev;
};
void insert1(Node**head,string s)
{
    Node*new_node=new Node();
    Node*temp=*head;
    if(*head==NULL)
    {

    new_node->prev=NULL;
        new_node->data=s;
       * head=new_node;
        return;
    }
    while(temp->next!=NULL)
    {

        temp=temp->next;
    }
    new_node->prev=temp;
    new_node->data=s;
    temp->next=new_node;


}
Node*insertmidle(Node*head,string s)
{

    Node*temp=head;
    Node*new_node=new Node();
    int a=0;
    while(temp!=NULL)
    {
        a++;
        temp=temp->next;
    }
    temp=head;
    for(int i=1;i<=(a/2);i++)
    {
        if(i==(a/2))
        {new_node->data=s;
        new_node->prev=temp;
        new_node->next=temp->next;
        temp->next->prev=new_node;
        temp->next=new_node;
        }
        temp=temp->next;
    }
    return head;

}
int main()
{
    Node*head=NULL;
    int i,n;
    string a,b;
    cout<<"enter no of inputs:";
    cin>>n;
    for(i=0;i<n;i++)
    {cout<<"\nenter element no "<<i+1<<":";
    cin>>a;

        insert1(&head,a);

    }
    cout<<"\nenter element to be inserted in middle:";
    cin>>b;
    head=insertmidle(head,b);

    Node*temp=head;
  while(temp!=NULL)
    {
        cout<<temp->data<<endl;
       temp=temp->next;
    }
}
