#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char c[1000];
    int len = 0;
    for (int i = 0; i < 1000; i++)
    {
        scanf("%c",&c[i]);
        if (c[i]>='a' && c[i]<='z' || c[i]>='0' && c[i]<='9')
        {
            len++;
        }
        if(c[i]==' '){
            break;
        }
        
    }
    for(char i = '0'; i <= '9'; i++){
        int count = 0;
        for(int j = 0; j < len; j++){
            if(c[j]==i){
                count++;
            }
        }
        printf("%d ", count);
    }
    
    return 0;
}