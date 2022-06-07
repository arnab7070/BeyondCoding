#include<iostream>
using namespace std;
#define n 3
class stack{
    int* arr;
    int top;

    public:
    stack(){
    arr = new int[n];
    top = -1;
    }

    void push(int x){
        if(top==n-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop(){

        if(top==-1){
            cout<<"No element to pop"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"No element is present in stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){

   stack st;
   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);
   st.empty();
   cout<<st.Top()<<endl;
   cout<<st.empty()<<endl;
   st.pop();
   cout<<st.Top()<<endl;
   st.pop();
   st.pop();
   st.pop();
   cout<<st.empty()<<endl;

return 0;
}