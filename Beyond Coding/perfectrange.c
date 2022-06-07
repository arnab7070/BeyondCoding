//program to find all perfect numbers in a given range
#include <stdio.h>
void perfectFinder(int start, int end){
    int i, j, sum;
    for(i=start; i<=end; i++)
    {
        sum = 0;
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
        if(sum == i)
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int limit1,limit2;
    printf("Enter lower limit: ");
    scanf("%d", &limit1);
    printf("Enter upper limit: ");
    scanf("%d", &limit2);
    printf("All Perfect numbers between %d to %d:\n", limit1,limit2);
    perfectFinder(limit1,limit2);
    return 0;
}