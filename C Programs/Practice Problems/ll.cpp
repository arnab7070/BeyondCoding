#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
	Node(int m){data=m;next=NULL;}
	//void insertBeg(Node*,int);
	//void insertEnd(Node*,int);
	//void display(Node*);
	//void delBeg(Node*);
	//void delEnd(Node*);
	//void reverse(Node*);
	//void search(Node*,int);	
};
void insertBeg(Node* &head, int item){
	Node *curr=new Node(item);
	curr->data=item;
	curr->next=head;
	head=curr;
}
void insertEnd(Node* &head, int item){
	Node *curr=new Node(item);
	curr->data=item;
	curr->next=NULL;
	if(head==NULL){
		head=curr;
		return;
	}
	Node *temp=head;
	while(temp->next!=NULL) temp=temp->next;
	temp->next=curr;
}
void delBeg(Node* &head){
	if(head==NULL){cout<<"Empty list...\n";return;}
	Node *temp=head;
	head=head->next;
	free(temp);
}
void delEnd(Node* &head){
	if(head==NULL){cout<<"Empty list...\n";return;}
	if(head->next==NULL){free(head);head=NULL;}
	Node *temp=head;
	while(temp->next->next!=NULL) temp=temp->next;
	free(temp->next);
	temp->next=NULL;
}
void reverse(Node* &head){
	Node *p=head,*q,*r=NULL;
	while(p!=NULL){
		q=p;
		p=p->next;
		q->next=r;
		r=q;
	}
	head=r;
}
void display(Node* &head){
	if(head==NULL){cout<<"Empty list...\n";return;}
	Node *temp=head;
	cout<<"Linked list is : ";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void search(Node* &head, int item){
	Node *ptr=head;
	while(ptr!=NULL){
		if(ptr->data==item){
			cout<<"Item found\n";
			break;
		}
	ptr=ptr->next;
	}
	if(ptr==NULL){
		cout<<"No item found\n";
	}
}
int main(){
	
	Node *head=NULL;
	while(1){
	int n,m;
	cout<<"Enter 1 for insert at beg, 2 for insert at end, 3 for delete from beg, 4 for delete from end, 5 for reverse, 6 for display :- ";
	cin>>n;
	switch(n){
	case 1: cout<<"Enter the value to be inserted at beg:- ";
			cin>>m;
			insertBeg(head,m); break;
	case 2: cout<<"Enter the value to be inserted at end:- ";
			cin>>m;
			insertEnd(head,m); break;
	case 3: //cout<<"Enter the value to be inserted:- ";
			//cin>>m;
			delBeg(head); break;
	case 4: delEnd(head); break;
	case 5: reverse(head); break;
	case 6: display(head); break;
	case 7: cout<<"Enter the value to be searched:- ";
			cin>>m;
			search(head,m); break;
	default: cout<<"Invalid option";return 0;
		}
	}
}


