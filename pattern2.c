#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){  
        int count = i;     
        for(int j = 1; j<=n; j++){
            if(i+j>n){
                printf(" %d",count);
                count++;
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
/* i+j>n -> num 
     1 2 3 4 
1          1
2        2 3
3      3 4 5
4    4 5 6 7
*/