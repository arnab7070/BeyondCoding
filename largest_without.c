//to find the largest number of three given numbers
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    if (a>b){
        if(a>c){
            printf("The maximum number is %d",a);
        }
        else
        {
            printf("The maximum number is %d",c);
        }    
    }
    else if (b>a)
    {
        if (b>c)
        {
            printf("The maximum number is %d", b);
        }
        else
        {
            printf("The maximum number is %d",c);
        }
    }
    return 0;
    
}