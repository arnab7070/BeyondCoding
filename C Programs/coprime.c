#include<stdio.h>
int main (){
    int num1,num2,hcf;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    for(int i=1;i<=num1;i++)
	 {
	  if(num1%i==0 && num2%i==0)
	  {
	   hcf = i;
	  }
	 }
    if(hcf == 1)
    {
    printf("%d and %d are CO-PRIME NUMBERS.", num1, num2);
    }
    else
    {
    printf("%d and %d are NOT CO-PRIME NUMBERS.", num1, num2);
    }
    return 0;
}