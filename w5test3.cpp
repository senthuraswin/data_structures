#include <iostream>
#include <stack>
#include <string>

using namespace std;

int longestValidParentheses(string s) {
    int n = s.length();
    int count;
    stack<int> st;

for (int i = 0; i < n; i++) {
        if (s[i] == '(')
        {

            st.push(i);
        }

      else{

      }
        } else {
            st.pop();


        }
    }

    return count;
}

int main(){
string exp="(()";
int output;
cout<<exp<<endl;

output=longestValidParentheses( exp);
cout<<output;
return 0;

}
