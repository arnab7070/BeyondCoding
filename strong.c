#include<stdio.h>
int factorial(int n){
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial*=i;
    }
    return factorial;
}
int main() {
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += factorial(remainder);
        originalNum /= 10;
        
    }
    if (result == num)
        printf("%d is an Strong number.", num);
    else
        printf("%d is not an Strong number.", num);

    return 0;
}