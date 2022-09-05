#include<bits/stdc++.h>
using namespace std;
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

void insertAtTail(int data, node* &head){
    node* newnode = new node(data);
    if(head==NULL){
        head = newnode;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}
void display(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
// 1/3rd of a list using fast & slow pointer
node* middleNode(node* &head) {
    node*slow=head;
    node*fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next->next;
    }
    return slow;
}
//Display singly linked list without reverse the list
void displayReverseList(node* &head){
    vector<int> arr; 
    node* temp = head;
    while(temp != NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    reverse(arr.begin(),arr.end()); //For reverse the array
    for(int x: arr){
        cout<<x<<"->";
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node* head = NULL;
    for(int i = 1; i <= 10; i++){
        insertAtTail(i,head);
    }
    display(head);
    displayReverseList(head);
    node* middle = middleNode(head);
    cout<<middle->data<<endl;
    return 0;
}