#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        next = NULL;
    }
};

void display(node *head){

    node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
        
}
void insertAtHead(node* &head/*Calling head by value*/, int val){
    node* newnode = new node(val);
    newnode->next = head;
    head = newnode;
}
void insertAtTail(node* &head, int val){
    while(head->next != NULL){
        head = head->next;
    }
    node* newnode = new node(val);
    head->next = newnode;
}
bool searchNode(node* &head, int val){
    node* temp = head;
    while(temp != NULL){
        if(temp->data==val){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
int length(node* &head){
    int length = 0;
    node* temp = head;
    while(temp!=NULL){
        length++;
        temp = temp->next;
    }
    return length;
}
int main()
{
    node* head = new node(4);
    insertAtTail(head,5);
    insertAtHead(head,1);
    display(head);
    cout<<searchNode(head,6)<<endl;
    cout<<searchNode(head,1)<<endl;
    cout<<length(head)<<endl;
    insertAtHead(head,10);
    cout<<length(head)<<endl;
    return 0;
}