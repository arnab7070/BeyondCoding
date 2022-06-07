#include <stdio.h>
#include <stdlib.h>
 
struct stack
{
    int size;
    int top;
    int *arr;
};
 
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack* ptr, int val){
    if (isFull(ptr))
    {
        printf("Stack Overflow........\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
} 
int pop(struct stack* ptr){
    if (isEmpty(ptr))
    {
        printf("Stack Underflow........\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top++;
        return val;
    }
} 
int peek(struct stack* s, int i){
    int arrayInd = s->top -i + 1;
    if(arrayInd < 0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return s->arr[arrayInd];
    }
}

int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));
 
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));  
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("stack is created successfully......\n");
    printf("stack before pushing elements...\n");
    printf("%d\n", isFull(s));
    printf("%d\n", isEmpty(s));
    push(s, 56);
    push(s, 57);
    push(s, 58);
    // push(s, 56);
    // push(s, 56);
    // push(s, 56);
    // push(s, 56);
    // push(s, 56);
    // push(s, 56);
    // push(s, 56); //--->pushed 10 elements
    // push(s, 56);//stack overflow
    printf("stack after pushing elements...\n");
    printf("%d\n", isFull(s));
    printf("%d\n", isEmpty(s));
    printf("stack after popping elements...\n");
    pop(s);
    printf("%d\n", isFull(s));
    printf("%d\n", isEmpty(s));
    // Printing values from the stack
    for (int j = 1; j <= s->top + 1; j++)
    {
        printf("The value at position %d is %d\n", j, peek(s, j));
    }
    return 0;
}