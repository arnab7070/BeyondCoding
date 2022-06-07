// 4. Mr. Sayan Ghosh is an employee of a Private Firm. His Basic is Rs. 5500/-. Now the dearness 
// allowance is 74% of his basic salary and house rent allowance is 15% of basic salary. Write
// a program to calculate his gross salary. [Though his basic salary is given, do this program 
// where basic is taken through keyboard].
#include<stdio.h>
int main()
{
    float basic, da, hra, Gross;
    printf("Enter Basic salary of the employee: ");
    scanf("%f", &basic);

    printf("Enter Percentage of dearness allowance: ");
    scanf("%f", &da);

    printf("Enter Percentage of house rent allowance: ");
    scanf("%f", &hra);

    Gross=(da/100)*basic+(hra/100)*basic+basic;
    printf("Gross Salary of the employee is Rs. %f", Gross);
    printf("/-");

    return 0;
}