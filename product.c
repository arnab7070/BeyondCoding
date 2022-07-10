#include<stdio.h>
int main()
{
    int num, m, product = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        m = num % 10; 
        product *= m; 
        num /=  10;  
    }
    printf("Product of the digits of this number: %d", product);
    return 0;
}