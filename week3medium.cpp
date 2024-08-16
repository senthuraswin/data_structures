#include<iostream>
#include<conio.h>
using namespace std;
class Node
{public:
    int data;
    Node*next;
};
Node * insert1(Node*head,int s)
{
    Node*new_node=new Node();
    new_node->data=s;
    new_node->next=head;
    return new_node;
}
Node*remove1(Node*head)
{
    Node*temp=head;
    Node*curr=head;
    while(curr!=NULL&&curr->next!=NULL)
    {

        if(temp->data!=curr->next->data)
        {
            temp=temp->next;
            curr=curr->next;
        }
        else
            {curr->next=curr->next->next;}

    }
    return head;
}
int main()
{
    Node*head=NULL;

    head=insert1(head,5);
    head=insert1(head,5);
    head=insert1(head,3);
    head=insert1(head,1);


   head= remove1(head);
   Node*temp=head;
  while(temp!=NULL)
    {
        cout<<temp->data<<endl;
       temp=temp->next;
    }

}
