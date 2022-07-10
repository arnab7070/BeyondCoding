#include<iostream>
using namespace std;
#define n 4
class queue{
    int* arr;
    int front;
    int back;

    public:
    queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void push(int x){
        if(back==n-1){
            cout<<"Queue full\n";
        }
        back=back+1;
        arr[back] = x;

        if(front == -1){
            front=front+1;
        }
    }
    void pop(){
        if(front==-1||front>back){
            cout<<"There is no element in queue to pop\n";
            return;
        }
        front++;
    }
    int peek(){
        if(front==-1||front>back){
            cout<<"There is no element in queue to pop\n";
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        if(front==-1||front>back){
            return true;
        }
        return false;
    }
};

int main(){

   queue q;
   for (int i = 1; i <= n; i++)
   {
       q.push(i);
   }
   cout<<q.empty()<<endl;
   cout<<q.peek()<<endl;
   q.pop();
   cout<<q.peek()<<endl;
   q.pop();
   cout<<q.peek()<<endl;
   q.pop();
   cout<<q.peek()<<endl;
   q.pop();
   cout<<q.empty()<<endl;
   q.pop();
   q.empty();

return 0;
}