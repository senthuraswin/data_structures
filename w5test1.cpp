#include<iostream>
#include<stack>
using namespace std;
bool isDigit(char c){
if(c>='0' && c<='9'){
    return true;}
else{
        return false;}}


int evaluatePostfix(string exp)
{
    stack <int> st;
    int val1,val2;
for(int i=0;i<exp.size();i++)
    {

    if(isDigit(exp[i])){
        st.push(exp[i]-'0');}
    else{
         val1=st.pop();
         val2=st.pop();
    switch(exp[i]){
case '+':
    st.push(val2+val1);
    break;
case '-':
    st.push(val2-val1);
    break;
case '*':
    st.push(val2*val1);
    break;
case '/':
    st.push(val2/val1);
    break;
default:
    cout<<"invalid operator";
    break;

    }//swit
    }//else
    }//for
    return st.pop();}

int main(){
   string exp ;
   cout<<"enter postfix expression";
   cin>>exp;

   output=evaluatePostfix( exp);
   cout<<"output:";
   return 0;


}
