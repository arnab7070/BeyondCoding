#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",(int)pow(3,i));
    }
    
    printf("Now again enter the value of n: ");
    int r;
    scanf("%d", &r);
    for (int j = 0; j < r; j++)
    {
        printf("%d ",100-(3*j));
    }
    printf("\nNow again enter the value of n: ");
    int l;
    scanf("%d",&l);
    for(int k = 0; k<l; k++){
        printf("%d ", (int)pow(3,(k+1)));
        printf("%d ", 100-(3*k));
    }
    return 0;
}