#include<stdio.h>
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertionSort(int *arr, int n){
    int key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i-1;
        while (j>=0 && arr[j]>key) //for ascesending
        //while (j>=0 && arr[j]<key) //for decesending
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    } 
}
int main(){
    int arr[] = {4, 8, 96, 5, 25, 46};
    printArray(arr,6);
    insertionSort(arr, 6);
    printArray(arr, 6);
    return 0;
}