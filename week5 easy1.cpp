#include<iostream>
#include<conio.h>
using namespace std;
struct emp{
int id,sal;
string name;
};
class lifo{
    public:
   struct emp e[5];
   int top;
    lifo()
    {
        top=-1;
    }
    void push(int id1,int sa,string name1)
    {
        if(top<4)
        {
            top++;
           e[top].id=id1;
            e[top].sal=sa;
            e[top].name=name1;
        }
    }
    void pop( )
    {
        if(top<0)
        {
            cout<<"stak is empty:";
        }
        else{cout<<"poping"<<endl;
            cout<<e[top].id<<endl<<e[top].sal<<endl<<e[top].name<<endl;
            top--;
        }
    }
    void peak()
    {
        cout<<"\ntop val:"<<top<<endl;
    }
    void dis()
    {
        int a=top;
        for(int i=top;i>-1;i--)
             cout<<e[i].id<<endl<<e[i].sal<<endl<<e[i].name<<endl;
    }
};
int main()
{lifo s;
    int id,sal,n;
    string name;
    for(int i=0;i<5;i++)
    {
        cout<<"\n\nenter emp id:";
        cin>>id;
        cout<<"\nenter emp name:";
        cin>>name;
        cout<<"\n enter salary:";
        cin>>sal;
        s.push(id,sal,name);

    }
    s.dis();
    s.pop();
    s.peak();
}
