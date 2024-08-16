#include<iostream>
#include<conio.h>
using namespace std;
class Node
{public:
    int data;
    Node*next;
    Node*prev;
};
void find1(Node*head)
{
    Node*temp=head;
    int a=0;
    while(temp!=NULL)
    {
        a++;
        temp=temp->next;
    }
    temp=head;
    for(int i=0;i<=(a/2);i++)
    {
        if(i==(a/2))
        {

            cout<<"middle element is:"<<temp->data;
        }
        temp=temp->next;
    }
}
int main()
{
    Node*head=new Node(),*second=new Node(),*third=new Node();
    head->data=5;
    head->prev=NULL;
    head->next=second;
    second->data=6;
    second->next=third;
    second->prev=head;
    third->data=7;
    third->next=NULL;
    third->prev=second;
    Node*temp=head;
    find1(head);
  //  while(temp!=NULL)
    {
    //    cout<<temp->data<<endl;
      //  temp=temp->next;
    }

}
