#include<stdio.h>
int factorial(int n){
    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        ans = ans*i;
    }
    return ans;
}
int main(){
    int n,n1,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d is = %d\n",n,factorial(n));
    printf("Now we are going to find out the nCr\n");
    printf("Enter the value of n: ");
    scanf("%d",&n1);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    int nCr = (factorial(n1)/(factorial(r)*factorial(n1-r)));
    printf("So the value of %dC%d is = %d",n1,r,nCr);
    return 0;
}