//code to show the result
#include<stdio.h>
int main(){
    float a,b,c,d,e,f;
    double g;
    printf("Enter the number of physics: ");
    scanf("%f", &a);
    printf("Enter the number of chemistry: ");
    scanf("%f", &b);
    printf("Enter the number of biology: ");
    scanf("%f", &c);
    printf("Enter the number of mathematics: ");
    scanf("%f", &d);
    printf("Enter the number of computer: ");
    scanf("%f", &e);

    f = a+b+c+d+e;
    printf("The total marks you obtained: %f\n", f);
    g = (f/500)*100;
    printf("The total percentage you obtained: %f\n", g);

    if (g>=90)
    {
        printf("Your grade is A");
    }
    else if (g>=80)
    {
        printf("Your grade is B");
    }
    else if (g>=70)
    {
        printf("Your grade is C");
    }
    else if (g>=60)
    {
        printf("Your grade is D");
    }
    else if (g>=40)
    {
        printf("Your grade is E");
    }
    else
    {
        printf("Your grade is F");
    }
    return 0;
}