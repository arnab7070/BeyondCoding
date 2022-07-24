//To find wheather the number is odd or even
#include<stdio.h>
int main(){
    for(int i=0; i=10; i++)
    {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    if(a%2==0){
        printf("The entered number is even.\n");
    }
    else{
        printf("The entered number is odd.\n");
    }
    printf("Wanna try it once more ;)\n");
    }
    return 0;
}
