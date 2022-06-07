//check wheather the number is divisible by both 5 & 11
#include <stdio.h>
int main()
{
    for (int i = 0; i < 4; i++)
    {  
    int a;
    printf("Enter any number: "); //10, 33, 110, 14 check these numbers
    scanf("%d", &a);
    if (a % 5 == 0)
    {
        if (a % 11 == 0)
        {
            printf("The number is divisible by both 5 & 11\n");
        }
        else
        {
            printf("The number is divisible by 5 but not divisible by 11\n");
        }
    }
    else
    {
        printf("The number is not divisible by both 5 & 11\n");
    }
    printf("\n_______________Try Again!!!_______________\n\n");
    }

    return 0;
}