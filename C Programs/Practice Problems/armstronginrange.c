//program to find out all armstrong numbers in a given range
#include<stdio.h>
int main() {
    int start, end, originalNum, remainder;
    printf("Enter a lower limit: ");
    scanf("%d", &start);
    printf("Enter a upper limit: ");
    scanf("%d", &end);

    for(int i = start; i <= end; i++){
        int result = 0;
        originalNum = i;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += remainder*remainder*remainder;
            originalNum /= 10;
        }
        if (result == i)
            printf("%d ", i);

    }
    return 0;
}
