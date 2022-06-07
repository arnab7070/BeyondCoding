//C program to check whether a number is even or odd using switch case
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number to check wheather it is even or odd: ");
    scanf("%d", &n);

    switch(n%2)
    {   
        case 0: 
            printf("%d is even", n);
            break;
        case 1: 
            printf("%d is odd", n);
            break;
    }

    return 0;
}