#include <stdio.h>

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionSort(int *arr, int n)
{
    printf("Running Selection Sort......\n");
    int indexOfMin;
    for (int i = 0; i < n-1; i++)
    {
        indexOfMin = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[indexOfMin])
            {
                int temp = arr[j];
                arr[j] = arr[indexOfMin];
                arr[indexOfMin] = temp;
            }  
        }
    }
}

int main()
{

    int arr[] = {29, 52, 11, 67, 15, 9, 33, 53, 48, 69, 75, 87, 96};
    int n = 13;
    printArray(arr, 13);
    selectionSort(arr, 13);
    printArray(arr, 13);

    return 0;
}