#include <stdio.h>
int main() {
    int num, i, perfect=0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: \n", num);
    for (i = 1; i < num; ++i) {
        if (num % i == 0) {
            printf("%d \n", i);
            perfect += i;
        }
    }
    if (perfect == num)
    {
        printf("It's a perfect number.\n");
    }
    else
    {
        printf("It's not a perfect number.\n");
    }
    return 0;
}