//program to convert decimal to roman number
#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The converted roman value of this number is: ");
    while (n!=0)
    {
        if (n>=1000)
        {
            int x = n/1000;
            for (int i = 0; i < x; i++)
            {
                printf("M");
            }
            n = n-(x*1000);
        }
        if (n>=900)
        {
            int e = n/900;
            for (int i = 0; i < e; i++)
            {
                printf("CM");
            }
            n = n-(e*900);
        }
        if (n>=500)
        {
            int y = n/500;
            for (int i = 0; i < y; i++)
            {
                printf("D");
            }
            n = n-(y*500);
        }
        if (n>=400)
        {
            int h = n/400;
            for (int i = 0; i < h; i++)
            {
                printf("CD");
            }
            n = n-(h*400);
        }
        if (n>=100)
        {
            int z = n/100;
            for (int i = 0; i < z; i++)
            {
                printf("C");
            }
            n = n-(z*100);
        }
        if (n>=90)
        {
            int f = n/90;
            for (int i = 0; i < f; i++)
            {
                printf("XC");
            }
            n = n-(f*90);
        }
        if (n>=50)
        {
            int a = n/50;
            for (int i = 0; i < a; i++)
            {
                printf("L");
            }
            n = n-(a*50);
        }
        if (n>=40)
        {
            int j = n/40;
            for (int i = 0; i < j; i++)
            {
                printf("XL");
            }
            n = n-(j*40);
        }
        if (n>=10)
        {
            int b = n/10;
            for (int i = 0; i < b; i++)
            {
                printf("X");
            }
            n = n-(b*10);
        }
        if (n>=9)
        {
            int g = n/9;
            for (int i = 0; i < g; i++)
            {
                printf("IX");
            }
            n = n-(g*9);
        }
        if (n>=5)
        {
            int c = n/5;
            for (int i = 0; i < c; i++)
            {
                printf("V");
            }
            n = n-(c*5);
        }
        if (n>=4)
        {
            int k = n/4;
            for (int i = 0; i < k; i++)
            {
                printf("IV");
            }
            n = n-(k*4);
        }
        if (n>=1)
        {
            int d = n/1;
            for (int i = 0; i < d; i++)
            {
                printf("I");
            }
            n = n-(d*1);
        }
        
    }
    return 0;
}
