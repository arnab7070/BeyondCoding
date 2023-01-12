// Priority Queue Implementation Using Linked List
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void enque(Node *&head, int item)
{
    // if node == NULL
    if (head == NULL)
    {
        Node *new_node = new Node(item);
        head = new_node;
        return;
    }
    // if single node was there
    else if (head->next == NULL)
    {
        Node *new_node = new Node(item);
        if (item < head->data)
        {
            new_node->next = head;
            head = new_node;
            return;
        }
        head->next = new_node;
        return;
    }
    // Else check the priority for other condition
    Node *temp = head;

    while (temp->next != NULL && item > temp->data && item > temp->next->data)
    {
        // temp->next != NULL it should check first to avoid segmentation fault
        /* item > temp->next->data is for Handling the mid insertion */
        /* temp->next != NULL is for Important for handling tail case */
        temp = temp->next;
    }

    Node *new_node = new Node(item);
    // Handling the tail insert case
    if (temp->next == NULL)
    {
        temp->next = new_node;
        return;
    }
    // Handling the mid insertion case
    new_node->next = temp->next;
    temp->next = new_node;
}
// Plain delete from begin operation in Linked List
void deque(Node *&head)
{
    if (head == NULL)
    {
        cout << "Error: No element present in the priority queue." << endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
}
void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    enque(head, 7);
    enque(head, 1);
    enque(head, 3);
    enque(head, 2);
    enque(head, 10);
    enque(head, 4);
    enque(head, 5);
    enque(head, 4);
    display(head);
    deque(head);
    // deque(head);
    display(head);
    return 0;
}
