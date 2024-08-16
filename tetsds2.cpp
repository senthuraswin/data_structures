#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node * next;
};
void insertNode(Node * head,int data){
Node* newnode=new Node();
newnode->data=data;
newnode->next=NULL;
if(head==NULL){
    head=newnode;
    head->next=head;
}
else{
    Node *temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
}
}
void print(Node *head){
Node *t=head;
cout<<"elements:"<<endl;
while(t->next!=head){
    cout<<t->data<<endl;
    t=t->next;
}
}
void deletekey(Node *head,int key){
Node *current=head;
while(current->next!=head &&current->data!=key)
    {
        current=current->next;

    }
    if(current==NULL){
        cout<<"key not found";

    }
    Node *newnode=current->next;
    current->next=newnode->next;
    delete newnode;

}
int main(){
    Node* head=NULL;
    int k;
    insertNode(head,10);
    insertNode(head,7);
    insertNode(head,5);
    insertNode(head,8);
    insertNode(head,2);
    print(head);
    cout<<"enter the key to delete:";
    cin>>k;

    deletekey(head,k);
    print(head);
    return 0;

}


