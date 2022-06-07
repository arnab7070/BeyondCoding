#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1;
    printf("the random number is %d\n",number);
    do{
        printf("guess the number betwaeen 1 to 100\n : ");
        scanf("%d",&guess);
        if(guess>number){
            printf("lower the number please\n : ");
            
        }
        else if(guess<number){
            printf("higher the number please\n : ");
            
        } nguesses++;

        }while (number!=guess);
        if(number=guess){
            printf("you guessed it right in %d attempts",nguesses);
        }
    return 0;
}