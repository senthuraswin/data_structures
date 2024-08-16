#include<iostream>
#include<conio.h>
using namespace std;
class Node
{public:
    int data;
    Node*next;
    Node*prev;
};
void insert1(Node**head,int s)
{
    Node*new_node=new Node();
    Node*temp=*head;
      if (*head == NULL) {
         Node* new_node = new Node;
        new_node->data = s;
        new_node->next = new_node->prev = new_node;
        *head = new_node;
        return;
    }

    new_node->data = s;
    new_node->next = *head;
    new_node->prev = (*head)->prev;
    (*head)->prev->next = new_node;
     (*head)->prev = new_node;
}
void sumll(Node*head)
{if(head==NULL)
{
    cout<<"0";
    return;
}
if(head->next==head)
{
    cout<<"0";
    return;
}
	Node*temp=head;Node*new_node=NULL;
	int sum=0;
	do
	{sum=0;
		Node*curr=temp->next;
		do
		{
		sum+=curr->data;
		curr=curr->next;

		}while(curr!=temp);
    //cout<<sum<<endl;
    insert1(&new_node,sum);
    temp=temp->next;
    }while(temp!=head);
	temp=new_node;
	do
	{
		cout<<temp->data<<" ->";
		temp=temp->next;
	}while(temp!=new_node);
}
int main()
{
    Node*head=NULL;
    int i,n,a;
    cout<<"enter no of inputs:";
    cin>>n;
    for(i=1;i<=n;i++)
    {cout<<"\nenter element no "<<i<<":";
    cin>>a;
    insert1(&head,a);
	}
    sumll(head);
    return 0;
    getch();
}
