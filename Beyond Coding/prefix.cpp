#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int prefixEvaluation(string s){
    stack<int> st;
    for (int i = s.length()-1; i >= 0; i--)
    {
        if(s[i]>='0'&&s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int num1 = st.top();
            st.pop();
            int num2 = st.top();
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

   cout<<prefixEvaluation("*5+2/7+95")<<endl;

return 0;
}
//-+7*45+20 -> we will get 25 as our answer
///*5+2/7+95 -> we will get 10 as our answer