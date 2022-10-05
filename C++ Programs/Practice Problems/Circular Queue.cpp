#include<iostream>
#define MAX 5
using namespace std;

class circularQueue{
	int front,rear;
	int arr[MAX];
	
	public:
		//Constructor
		circularQueue(){
			front = rear = -1;
		}
		
		void push(int item){
			if((rear+1)%MAX == front){
				cout<<"QUEUE IS FULL"<<endl;
				return;
			}
			rear = (rear+1)%MAX;
			arr[rear]=item;
			cout<<"Pushed "<<arr[rear]<<endl;
			if(front==-1){
				front++;
			}
		}
		
		void pop(){
			if(front==-1){
				cout<<"QUEUE IS EMPTY"<<endl;
				return;
			}
			cout<<"Popped "<<arr[front]<<endl;
			front = (front+1)%MAX;
			if(front==rear){
				front=rear=-1;
			}
		}
};
int main(){
	circularQueue CQ;
	CQ.push(6);
	CQ.push(4);
	CQ.push(5);
	CQ.push(7);
	CQ.push(1);
	CQ.pop();
	CQ.pop();
	CQ.pop();
	CQ.pop();
	CQ.pop();
	CQ.push(4);
	CQ.push(5);
	CQ.push(7);
	CQ.push(1);
	CQ.push(4);
	CQ.push(5);
	return 0;
}
