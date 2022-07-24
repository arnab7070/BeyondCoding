//calculate the value of Y using switch case
#include<stdio.h>
int main(){
    int n,x;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%d", &x);

    switch (n)
    {
    case 1:
        printf("The value is %d", 1+(x*x));
        break;
    case 2:
        printf("The value is %d", 1+(x/n));
        break;
    case 3:
        printf("The value is %d", 1+(2*x));
        break;
    default:
        printf("The value is %d", 1+(n/x));
        break;
    }
    return 0;
}