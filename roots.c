//code to find out the roots of the given equation
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,e;
    printf("Enter the co-efficient of X^2: ");
    scanf("%d", &a);
    printf("Enter the co-efficient of X: ");
    scanf("%d", &b);
    printf("Enter the value of constant term: ");
    scanf("%d", &c);
    printf("So your given equation is %d",a);
    printf("X^2 + %d",b);
    printf("X + %d = 0\n",c);

    d = (-b + sqrt((b*b)-(4*a*c)))/2;
    e = (-b - sqrt((b*b)-(4*a*c)))/2;

    printf("So one root of the equation is %d",d);
    printf(" and another root is %d", e);
}