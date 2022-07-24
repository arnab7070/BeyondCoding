#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> st;
    stack<int> dupli_st;
    st.push(5);         //7
    st.push(6);         //6 
    st.push(7);         //5
    while(!st.empty()){
        int ele = st.top();
        dupli_st.push(ele);  
        st.pop();
    }
    
    while(!dupli_st.empty()){
        cout<<dupli_st.top()<<" ";
        dupli_st.pop();
    }
return 0;
}