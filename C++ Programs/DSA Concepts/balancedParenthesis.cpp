#include<iostream>
#include<stack>
#include<string>
using namespace std;

void balancedParenthesis(string s){
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);
        }
        else if ((s[i]==')'&&st.top()=='('||s[i]=='}'&&st.top()=='{'||s[i]==']'&&st.top()=='[')&&!st.empty())
        {
            st.pop();
        }
        else{
            cout<<"Invalid String\n";
            break;
        }
    }
    if (st.empty())
    {
        cout<<"Valid String\n";
    }
    
}
int main(){

   balancedParenthesis("(){{[}}[]");
   balancedParenthesis("(){}[]({()})");
   balancedParenthesis("{{[[(())]]}}");

return 0;
}