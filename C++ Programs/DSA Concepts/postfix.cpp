#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int postfixEvaluation(string s){
    stack<int> st;
    for (int i = 0 ; i < s.length(); i++)
    {
        if(s[i]>='0'&&s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int num2 = st.top();
            st.pop();
            int num1 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(num1+num2);
                break;
            case '-':
                st.push(num1-num2);
                break;
            case '*':
                st.push(num1*num2);
                break;
            case '/':
                st.push(num1/num2);
                break;
            case '^':
                st.push(pow(num1,num2));
                break;
            }
        }
    }
    return st.top();
}
int main(){

   cout<<postfixEvaluation("46+2/5*7+")<<endl;

return 0;
}
//52+7/9*5+ -> we will get 14 as our answer
///23*2^4+ -> we will get 68 as our answer