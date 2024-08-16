#include<iostream>
#include<conio.h>
using namespace std;
class que
{public:
    int a[1000],n,front=-1 ,rear=-1;
    que(int size)
    {
        n=size;
    }
    void enque(int d)
    {
        if(front==-1)
        {
            front=rear=0;
        }
        else if((rear+1)%n==front)
        {
            cout<<"queue is full";
            return;
        }
        else
        {
        rear=(rear+1)%n;
        }a[rear]=d;

    }
    void deque()
    {
         if(front==-1)
        {
            cout<<"queue is empty";
            return;
        }
        else if(rear==front)
        {
            rear=front=-1;
        }
        front=(front+1)%n;
    }
    void dis()
    {int b=front;
    cout<<"displaying";
      do
        {
        cout<<a[b]<<endl;
        b=(b+1)%n;
        }while(b!=(rear+1)%n);
    }
};
int main()
{
    int n,a;
    cout<<"\n enter no of input:";
    cin>>n;
    que q1(n);
    for(int i=0;i<n;i++)
    {
        cin>>a;
        q1.enque(a);

    }

    q1.deque();
    q1.dis();
}
