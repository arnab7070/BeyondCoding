//check wheather a given number is positive, negative or zero
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n>0)
    {
        printf("It is a positive number.");
    }
    else if (n<0)
    {
        printf("It is a negative number.");
    }
    else
    {
        printf("It is nothing but zero.");
    }
    return 0;
}