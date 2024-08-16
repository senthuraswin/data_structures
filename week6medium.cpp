#include<iostream>
#include<conio.h>
using namespace std;
class dequ
{public:
    int data;
    dequ*next;
};
void enque(dequ**head,int s)
{
    dequ*new_dequ=new dequ();
    dequ*front=*head;
    dequ*temp=*head;
    if(*head==NULL)
    {

        new_dequ->data=s;
       * head=new_dequ;
        return;
    }
    while(temp->next!=NULL)
    {

        temp=temp->next;
    }
    new_dequ->data=s;
    temp->next=new_dequ;
    dequ*rear=new_dequ;
}
dequ *insba(dequ*head,int s)
{

    dequ *temp=head,*new_dequ=new dequ();
        new_dequ->data=s;
if(temp==NULL)
{
    return new_dequ;
}
        while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_dequ;
    new_dequ->next=NULL;
    return head;


}
dequ* deque(dequ*head)
{
   dequ*new_dequ=new dequ();

    dequ*temp=head;
        if(head==NULL)
    {

       cout<<"queue is empty";
        return NULL;
    }
    dequ*front=head->next;
    head=head->next;
    delete temp;
    return head;
}
int main()
{
    dequ*head=NULL;
    int i,n,a,c;
  do
  {cout<<"\nenter 1 for insert front \n2for insert back\n3for deque back\n4 for deque front\n5 for display";
    cout<<"\nenter choice:";
    cin>>c;
    switch(c)
    {case 1:
    cout<<"\nenter no of inputs:";
    cin>>n;
    cout<<"\nenter elements";
    for(i=0;i<n;i++)
    {
    cin>>a;

        enque(&head,a);
    }
    break;
case 2:
     cout<<"\nenter no of inputs:";
    cin>>n;
    cout<<"\nenter elements";
    for(i=0;i<n;i++)
    {
    cin>>a;

     head=insba(head,a);
    }
    break;
    case 4:
    head=deque(head);
    break;
    case 5:
    dequ*temp=head;
    while(temp!=NULL)
    {
    	cout<<temp->data<<endl;
    	temp=temp->next;
	}
	break;
  }
}while(c!=0);
}
