#include<stdio.h>
float sum(float num1, float num2){
    return num1+num2;
}
int main(){
    float n1,n2;
    printf("Enter first number: ");
    scanf("%f",&n1);
    printf("Enter second number: ");
    scanf("%f",&n2);
    printf("The sum of %f & %f is = %f",n1,n2,sum(n1,n2));
    return 0;
}