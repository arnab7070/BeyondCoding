//C program print total number of days in a month using switch case
#include<stdio.h>
void check(int year){
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            printf("It's February of leap year so it has 29 days.");
        }
        else
        {
            printf("It's February and it has 28 days.");
        }
    }
    else if (year % 4 == 0)
    {
        printf("It's February of leap year so it has 29 days.");
    }
    else
    {
        printf("It's February and it has 28 days.");
    }
}
int main(){
    int n;
    int year;
    // printf("Enter the number of the month [choose (1-12)]\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("It's January and it has 31 days.");
        break;
    case 2:
        printf("Enter the year: ");
        scanf("%d", &year);
        check(year);  
        break;
    case 3:
        printf("It's March and it has 31 days.");
        break;
    case 4:
        printf("It's April and it has 30 days.");
        break;
    case 5:
        printf("It's May and it has 31 days.");
        break;
    case 6:
        printf("It's June and it has 30 days.");
        break;
    case 7:
        printf("It's July and it has 31 days.");
        break;
    case 8:
        printf("It's August and it has 31 days.");
        break;
    case 9:
        printf("It's September and it has 30 days.");
        break;
    case 10:
        printf("It's October and it has 31 days.");
        break;
    case 11:
        printf("It's November and it has 30 days.");
        break;
    case 12:
        printf("It's Decemeber and it has 31 days.");
        break;
    default:
        printf("Invalid Selection!!!");
        break;

    return 0;
}
}