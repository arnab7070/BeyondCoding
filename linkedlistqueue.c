#include <stdio.h>
#include <stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;

struct Node
{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *ptr)
{
    printf("Printing the elements of the linkedlist....\n");
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        printf("->");
        ptr = ptr->next;
    }
    printf("NULL\n");
}
void enqueue(int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Queue is Full\n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
    printf("Enqueing Element -> %d\n", val);
}
int dequeue()
{
    int val = -1;
    struct Node *ptr = f;
    if (f == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}
int main()
{
    // printf("Dequeing Element: %d\n",dequeue());
    enqueue(1);
    enqueue(2);
    enqueue(3);
    linkedListTraversal(f);
    while (f != NULL)
    {
        printf("Dequeing Element: %d\n", dequeue());
    }

    linkedListTraversal(f);
    return 0;
}