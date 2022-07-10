#include<stdio.h>
void countEvenOdd(int *arrPtr, int *n){
    int even = 0,odd = 0;
    for (int i = 0; i < *n; i++)
    {
        if (arrPtr[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
        
    }
    printf("Total even numbers = %d & odd numbers = %d",even,odd);
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    int *arrPtr = (int*)&arr;
    printf("Enter the elements in the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
     
    countEvenOdd(arrPtr, &n); //calling the function
    return 0;
}