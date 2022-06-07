#include<stdio.h>
int main(){

    int first, second;
    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &first, &second); 
    printf("You have entered: ");
switch (first)
    {
    case 1:
        switch (second)
        {
        case 0:
            printf("Ten");
        case 1:
            printf("Eleven");
        case 2:
            printf("Twelve");
        case 3:
            printf("Thirteen");
        case 4:
            printf("Fourteen");
        case 5:
            printf("Fifteen");
        case 6:
            printf("Sixteen");
        case 7:
            printf("Seventeen");
        case 8:
            printf("Eigthteen");
        case 9:
            printf("Nineteen");
        }
    case 2:
        printf("Twenty");
        break;
    case 3:
        printf("Thirty");
        break;
    case 4:
        printf("Forty");
        break;
    case 5:
        printf("Fifty");
        break;
    case 6:
        printf("Sixty");
        break;
    case 7:
        printf("Seventy");
        break;
    case 8:
        printf("Eighty");
        break;
    case 9:
        printf("Ninety");
        break;
    }
    
    switch (second)
    {
    case 1:
        printf(" One");
        break;
    case 2:
        printf(" Two");
        break;
    case 3:
        printf(" Three");
        break;
    case 4:
        printf(" Four");
        break;
    case 5:
        printf(" Five");
        break;
    case 6:
        printf(" Six");
        break;
    case 7:
        printf(" Seven");
        break;
    case 8:
        printf(" Eight");
        break;
    case 9:
        printf(" Nine");
        break;
    }
    return 0;
}