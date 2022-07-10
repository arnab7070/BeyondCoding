#include <stdio.h> 
int func(int n)  
{  
    int counter=0; // variable declaration  
    while(n!=0)  
    {  
        n=n/10;  
        counter++;  
    }  
    return counter;  
}  
int main()  
{  
    int num;  // variable declaration  
    int count=0;  // variable declaration  
    printf("Enter a number: ");  
    scanf("%d",&num);  
    count=func(num);  
   printf("Number of digits is : %d", count);  
     
    return 0;  
}  
 