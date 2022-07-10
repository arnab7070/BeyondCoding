//code to swap two numbers
//#include <stdio.h>
int main()
{
    for (int i = 0; i = 10; i++)
    {
        int a, b;
        printf("Enter two number you want to swap: \n");
        scanf("%d%d", &a, &b);
        printf("Before swap a=%d b=%d", a, b);
        a = a + b;
        b = a - b;
        a = a - b;
        printf("\nAfter swap a=%d b=%d\n", a, b);
        printf("Wanna try once more ;)\n");
        printf("\n");
    }
    return 0;
}