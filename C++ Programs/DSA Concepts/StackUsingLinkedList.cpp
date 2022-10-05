#include <iostream>
using namespace std;
//Node structure for building stack
class node{
	public:
	int data;
	node* next;
	
	//Constructor
	node(int data){
		this->data = data;
		this->next = NULL;
	}	
	
};
//First In Last Out Method (F-I-L-O Method)
void insertAtBegin(node* &head, int data){
	node* temp = new node(data);
	cout<<"Pushed: "<<data<<endl;
	if(head==NULL){
		head = temp;
		return;
	}
	
	temp->next = head;
	head = temp;
}
//Display fuction to display the whole list
void display(node* head){
	if(head==NULL){
		cout<<"Stack Underflow"<<endl;
		return;
	}
	while(head!=NULL){
		cout<<head->data<<"->";
		head = head->next;
	}
	cout<<"NULL"<<endl;
}
//Removing element from the last of the list
void deleteAtEnd(node* &head){
	
	if(head==NULL){
		cout<<"Stack Underflow"<<endl;
		return;
	}
	
	cout<<"Popped: "<<head->data<<endl;
	node* temp = head;
	head = head->next;
	delete temp;
	
}
		                  
int main(){
	
	node* head = NULL;
	while(true){
		cout<<"1. Push\n2. Pop\n3. Display\n0. Exit\n";
		int option;
		cout<<"Enter any option: ";
		cin>>option;
		
		switch(option){
			case 1:
				int element;
				cout<<"Enter the element to be pushed into stack: ";
				cin>>element;
				insertAtBegin(head,element);
				break;
			case 2:
				deleteAtEnd(head);
				break;
			case 3:
				display(head);
				break;
			default:
				cout<<"Thanks for using stack using Linked List"<<endl;
				return 0;
		}
	}
	return 0;
}