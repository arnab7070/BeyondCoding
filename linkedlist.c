#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        printf("->");
        ptr = ptr->next;
    }
    printf("NULL");
}
// Case 1
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
// Case 2
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
// Case 3
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
// Case 4
struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}
//Delete the head node
struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
//Delete the node at an Index
struct Node *deleteAtIndex(struct Node *head, int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;

}
//Delete the last element
struct Node *deleteAtLast(struct Node *head){    
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;

}
//Delete the node at an given value
struct Node *deleteAtValue(struct Node *head, int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != value && q->next!=NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

//reverse the linked list
struct Node* recursiveReversedLinkedList(struct Node* head){
    //base condition
    if(head==NULL || head->next==NULL){
        return head;
    }
    struct Node* newHead = recursiveReversedLinkedList(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    // Link first and second nodes
    head->data = 7;
    head->next = second;
    // Link second and third nodes
    second->data = 11;
    second->next = third;
    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;
    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    printf("Linked list before insertion\n");
    linkedListTraversal(head);
    head = insertAtFirst(head, 36);
    head = insertAtIndex(head, 26, 2);
    head = insertAtEnd(head, 56);
    head = insertAfterNode(head, third, 46);
    printf("\n\nLinked list after insertion\n");
    linkedListTraversal(head);

    printf("\n\nLinked list before deletion\n");
    linkedListTraversal(head);

    //head = deleteFirst(head);
    //head = deleteAtIndex(head, 2);
    //head = deleteAtLast(head);
    head = deleteAtValue(head, 41);

    printf("\n\nLinked list after deletion\n");
    linkedListTraversal(head);

    printf("\nLinked list before reverse process\n");
    linkedListTraversal(head);
    struct Node* newHead = recursiveReversedLinkedList(head);
    printf("\nLinked list after reverse process\n");
    linkedListTraversal(newHead);
    return 0;
}