#include<iostream>
#include<conio.h>
#include<algorithm>
#include<string>
using namespace std;
class Node
{public:
    string data;
    Node*next;
};
Node * insert1(Node*head,string s)
{
    Node*new_node=new Node();
    new_node->data=s;
    new_node->next=head;
    return new_node;
}
void check(Node*head)
{
    Node*temp=head;
    string s,a;
    while(temp!=NULL)
    {
       s=temp->data;
       a=s;
       reverse(s.begin(),s.end());
       if(a==s)
       {

           cout<<"\n"<<s<<" is palindrome";
       }
       else{
        cout<<"\n"<<a<<" is not palindrome";
       }
       temp=temp->next;
    }

}
int main()
{
    Node*head=NULL;

    head=insert1(head,"malayalam");
    head=insert1(head,"dad");
    head=insert1(head,"mom");
    head=insert1(head,"summa");
    Node*temp=head;
    check(head);


}
