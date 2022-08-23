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
void insertAtMiddle(node* &head, int val, int pos){
    if(pos==0){
        insertAtHead(head,val);
    }
    
    node* temp = head;
    for (int jump = 1; jump <= pos-1; jump++)
    {
       temp = temp->next;
    }
    node* newnode = new node(val);
    newnode->next = temp->next;
    temp->next = newnode;

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
void deleteAtFirst(node* &head){
   if(head==NULL){
      return;
   }
   node*temp=head;
   head= head->next;
   delete temp;
   return;
}
void deleteAtLast(node* &head){
   if(head==NULL){
      return;
   }
   node* temp = head;
   while(temp->next->next != NULL){
        temp = temp->next;
   }
   delete temp->next->next;
   temp->next = NULL;
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
void deleteAtMiddle(node* &head, int key){
    if(head==NULL){
        return;
    }
    
    node* temp = head;
    node* prev = NULL;
    // Else Search for the key to be deleted,
    // keep track of the previous node as we
    // need to change 'prev->next' 
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    // Unlink the node from linked list
    prev->next = temp->next;
    // Free memory
    delete temp;
}

node* reveseLinkedList(node* head){
    //Recursive Method
    if(head ==  NULL or head->next == NULL){
        return head;
    }
    
    node* smallHead = reveseLinkedList(head->next);
    head->next->next = head;
    head->next = NULL;
    return smallHead;
}

node* kReversedNode(node* head, int k){
    if(head==NULL){
        return NULL;
    }
    //Reverse first K nodes
    node* prev = NULL;
    node* current = head;
    node* temp;

    int count = 1;

    while(current!=NULL and count <= k){
        temp = head->next;
        current->next = prev;
        prev = current;
        current = temp;
        count++;
    }

    if(temp != NULL){
        head->next = kReversedNode(temp,k);
    }
    return prev;
}

node* merge(node* a, node* b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    node *c;

    if(a->data < b->data){
        c = a;
        c->next = merge(a->next,b);
    }
    else{
        c = b; 
        c->next = merge(a,b->next);
    }
    return c;
}
int main()
{
    node* head = new node(4);
    insertAtTail(head,5);
    insertAtHead(head,1);
    // display(head);
    // cout<<searchNode(head,6)<<endl;
    // cout<<searchNode(head,1)<<endl;
    // cout<<length(head)<<endl;
    insertAtHead(head,10);
    // display(head);
    // cout<<length(head)<<endl;
    insertAtMiddle(head,8,2);
    display(head);
    deleteAtMiddle(head,1);
    display(head);
    node* reversedHead = reveseLinkedList(head);
    display(reversedHead);

    // node *a = NULL;
    // insertAtHead(a,10);
    // insertAtHead(a,7);
    // insertAtHead(a,5);
    // insertAtHead(a,1);
    

    // node *b = NULL;
    // insertAtHead(b,6);
    // insertAtHead(b,3);
    // insertAtHead(b,2);

    // node* head = merge(a,b);
    // display(head);
    
    return 0;
}