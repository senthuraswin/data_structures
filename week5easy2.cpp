#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
class Node{
    public:
    int id,mark;
    string name;
    Node *next=NULL;
};
Node * insert1(Node*head,int id,int mark,string s)
{
    Node*new_node=new Node();
    new_node->name=s;
    new_node->id=id;
    new_node->mark=mark;
    new_node->next=head;
    return new_node;
}
Node* del(Node*head)
{
    Node*temp=head;
    head=head->next;
    delete temp;
    return head;
}
int main()
{
    Node*head=NULL;
    int n,id,mark;
    string name;
    cout<<"\n enter no of inputs:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\n\nenter name:";
        cin>>name;
        cout<<"\n enter id:";
        cin>>id;
        cout<<"\nenter mark:";
        cin>>mark;
        head=insert1(head,id,mark,name);
    }
    Node*temp=head;
    while(temp!=NULL)
    {
         cout<<"\n\nname:"<<temp->name;
        cout<<"\n id:"<<temp->id;
        cout<<"\nmark"<<temp->mark;
        temp=temp->next;
    }
   head=del(head);
       temp=head;
    while(temp!=NULL)
    {
         cout<<"\n\nname:"<<temp->name;
        cout<<"\n id:"<<temp->id;
        cout<<"\nmark"<<temp->mark;
        temp=temp->next;
    }
}
