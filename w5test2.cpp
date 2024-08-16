#include<iostream>
#include<stack>
using namespace std;
string removeadjdup(string exp){

 stack <string> st1;
 stack <string> st2;

 for(int i=0;i<exp.size();i++){
 if(!st1.empty() && st1.top()==exp[i]){
    st1.pop();
 }
 else{
    st1.push(exp[i]);
 }}

 while(!st1.empty()){

           st2.push(st1.top());

        st1.pop();



 }
 while(!st2.empty()){
        string res=st2.pop();

 }
 return res;

}
int main(){
string input="azxxzy";
cout<<input;
string output=removeadjdup(input);
cout<<output;
return 0;}
