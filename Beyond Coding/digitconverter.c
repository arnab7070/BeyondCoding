#include<stdio.h>
void converter(int n){
    switch (n)
    {
    case 1:
        printf("One ");
        break;
    case 2:
        printf("Two ");
        break;
    case 3:
        printf("Three ");
        break;
    case 4:
        printf("Four ");
        break;
    case 5:
        printf("Five ");
        break;
    case 6:
        printf("Six ");
        break;
    case 7:
        printf("Seven ");
        break;
    case 8:
        printf("Eight ");
        break;
    case 9:
        printf("Nine ");
        break;
    case 0:
        printf("Zero ");
        break; 
    }
}
int main(){
    int n,temp;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp = n;
    int rev_num = 0;
    while(n!=0){
      rev_num = rev_num * 10 + n%10;
      n = n/10;
    }
    while(rev_num != 0){
        int digit = rev_num % 10;
        rev_num = rev_num / 10;
        converter(digit);
    }
    while (temp%10==0)
    {
        converter(0);
        temp=temp/10;
    }
    return 0;
}
