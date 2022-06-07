//program to check a number wheather it is even or odd by switch operation
#include<stdio.h>
int main(){
    int n;
    printf("Enter your desired number: ");
    scanf("%d", &n);
    int check = n%2;
    switch (check)
    {
    case 0:
        printf("The given number %d is even", n);
        break;
    case 1:
        printf("The given number %d is odd", n);
        break;
    }
    return 0;
}