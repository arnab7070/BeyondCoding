#include <stdio.h>
int main() {
    int num, i, count=0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nSo, total number of factors for %d is = %d", num,count);
    return 0;
}
