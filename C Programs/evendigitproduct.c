#include<stdio.h>
int main (){
    int num;
    int product = 1;
    printf("Enter the number: ");
    scanf("%d",&num);
    int temp = num;
    while(num != 0){
        
        int digit = num % 10;
        num = num / 10;
        if(digit%2==0){
            product = digit*product;
        }
    }
    printf("The product of even digits of %d is: %d", temp,product);
    return 0;
}