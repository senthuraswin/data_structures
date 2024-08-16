#include<iostream>
#include<conio.h>
using namespace std;
class lifo{
    int top;
    public:
    char st[100];
    lifo()
    {
        top=-1;
    }
    bool push(char a)
    {if(top>=100-1){
            cout<<"Stack overflow";
            return false;
        }
        else{
            st[++top]=a;
            return true;
        }
    }
    bool isempty(){
        return (top<0);}

    char pop()
    {if(top<0)
    {return 'f';}
      else{
          char a=st[top--];
        return a;
      }}
};
string problem(string s1)
{
    lifo st;
    for(char c:s1){
        if(c=='{'){
            st.push(c);
        }
        else if(c=='}'){
                if (st.isempty()) {
                return "Unbalanced";
            }
            char ch=st.pop();
            if(ch!='{'){
                return "Unbalanced";
            }
        }
    }
    return st.isempty() ? "Balanced" : "Unbalanced";
}
int main(){
    lifo s1;
    string s;
    cout<<"Enter the string:";
    cin>>s;
    cout<<problem(s);

}
