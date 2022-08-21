#include<iostream>
#include<stack>
using namespace std;

int main(){
    /*
    //Approach 1
    string s;
    cin>>s;
    stack<char> st;
    bool ans = false;
    for(int i = 0; i<s.size(); i++){
        if(s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*' || s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.top()=='('){
                ans = true;
            }
            while(st.top() == s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*'){
                st.pop();
            }
            st.pop();
        }
    }
    cout<<ans<<endl;
    */

   //Approach 2
   string str;
   cout<<"Enter the equation: ";
   cin>>str;
   stack<char> st;
   bool operator_found;
   for(int i = 0; i < str.length(); i++){
        if(str[i]!=')'){
            st.push(str[i]);
        }
        
        if(str[i]==')'){
            operator_found = false;
            while(!st.empty() and st.top()!='('){
                char temp = st.top();
                if(temp == '+' || temp == '-' || temp == '*' || temp == '/'){
                    operator_found = true;
                }
                st.pop();
            }
            st.pop(); // For popping out the opening bracket
            if(operator_found==false){
                cout<<"Contains Redundant Parenthesis\n";
                return EXIT_SUCCESS;
            }
        }
   }
   if(operator_found==true){
        cout<<"Doesn't Contains Redundant Parenthesis\n";
   }
return 0;
}