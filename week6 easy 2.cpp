#include<iostream>
#include<conio.h>
using namespace std;
class Node
{
    public:
        int data;
        Node*front;
        Node*rear;
        Node*next;
};
void enque(Node**head,int s)
{
    Node*new_node=new Node();
    Node*front=*head;
    Node*temp=*head;
    if(*head==NULL)
    {

        new_node->data=s;
       * head=new_node;
        return;
    }
    while(temp->next!=NULL)
    {

        temp=temp->next;
    }
    new_node->data=s;
    temp->next=new_node;
    Node*rear=new_node;
}
Node* deque(Node*head)
{
   Node*new_node=new Node();

    Node*temp=head;
        if(head==NULL)
    {

       cout<<"queue is empty";
        return NULL;
    }
    Node*front=head->next;
    head=head->next;
    delete temp;
    return head;
}
int main()
{
    Node*head=NULL;
    int i,n,a;
    cout<<"enter no of inputs:";
    cin>>n;
    for(i=0;i<n;i++)
    {cout<<"\nenter element no "<<i+1<<":";
    cin>>a;

        enque(&head,a);
    }
    head=deque(head);
    Node*temp=head;
    while(temp!=NULL)
    {
    	cout<<temp->data<<endl;
    	temp=temp->next;
	}

}
