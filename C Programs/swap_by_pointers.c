#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    //calling swap function
    swap(&a,&b);
    printf("Numbers after swapping....\n");
    printf("Now first Number is: %d\n",a);
    printf("Now second Number is: %d\n",b);

    return 0;
}