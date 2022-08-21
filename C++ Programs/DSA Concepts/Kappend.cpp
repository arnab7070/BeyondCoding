#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void displayLinkedList(node* head){
    while (head!=NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;

}

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if (head==NULL)
    {
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

bool search(node* head, int key){
    node* temp = head;
    while(temp!=NULL){
        if (temp->data==key)
        {
            return true;
        }
        temp = temp->next;  
    }
    return false;
}

//11_Append Last K Nodes of a Linked List Question Solved
int length(node* head){
    int l = 0;
    node* temp = head;
    while (temp!=NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}

node* kAppend(node* &head, int k){
    node* newTail;
    node* newHead;
    node* tail = head;
    int l = length(head);
    int count = 1;
    k = k%l;
    while (tail->next!=NULL)
    {
        if (count == l-k)
        {
            newTail = tail;
        }
        if (count == l-k+1)
        {
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }

    newTail->next = NULL;
    tail->next = head;

    return newHead;  
}

void evenAfterOdd(node* &head){
    node* odd = head;
    node* even  = head->next;
    node* evenStart = even;

    while (odd->next!=NULL&&even->next!=NULL){
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenStart;
    if(odd->next!=NULL){
        even->next = NULL;
    }
}

int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    displayLinkedList(head);
    evenAfterOdd(head);
    displayLinkedList(head);
    cout<<search(head,7)<<endl; //returns 0 as it's not present in the linked list
    cout<<search(head,4)<<endl; //returns 1 as it's present in the linked list
    node* newhead = kAppend(head,2); //last 2 nodes will be at first position
    displayLinkedList(newhead);
    return 0;
}