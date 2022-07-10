#include <stdio.h>
#include <stdlib.h>
struct queueUsingArray
{
    int size;
    int f;
    int r;
    int *arr;
};
int isFull(struct queueUsingArray *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct queueUsingArray *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queueUsingArray *q, int val)
{
    if (isFull(q))
    {
        printf("The Queue is full");
    }
    else
    {
        q->r = q->r + 1;
        q->arr[q->r] = val;
    }
}

int dequeue(struct queueUsingArray *q)
{
    if (isEmpty(q))
    {
        printf("No Elements to dequeue");
    }
    else
    {
        q->f = q->f + 1;
        return q->arr[q->f];
    }
}

int main(){
    struct queueUsingArray q;
    {
        q.size = 100;
        q.f = q.r = -1;
        q.arr = (int *)malloc(q.size * sizeof(int));
    };
    if (isEmpty(&q))
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue is not empty\n");
    }
    printf("Queue is now filling up.....\n");
    //Enque some elemets
    enqueue(&q, 12);
    printf("Queue is now filling up with element %d\n", 12);
    enqueue(&q, 13);
    printf("Queue is now filling up with element %d\n", 13);
    enqueue(&q, 14);
    printf("Queue is now filling up with element %d\n", 14);
    enqueue(&q, 15);
    printf("Queue is now filling up with element %d\n", 15);
    if (isEmpty(&q))
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue is not empty\n");
    }
    printf("Dequeuing elements.....\n");
    printf("Currently dequeing element %d\n", dequeue(&q));
    printf("Currently dequeing element %d\n", dequeue(&q));
    printf("Currently dequeing element %d\n", dequeue(&q));
    printf("Currently dequeing element %d\n", dequeue(&q));
    if (isEmpty(&q))
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue is not empty\n");
    }
    return 0;
}