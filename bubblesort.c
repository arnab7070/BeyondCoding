#include <stdio.h>

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSortAdaptive(int *arr, int n)
{
    int isSorted = 0; //to make the code adaptive 
    for (int i = 0; i < n - 1; i++)
    {
        printf("Working on pass number %d\n",i+1);
        for (int j = 0; j < n - 1 - i; j++)
        {
            isSorted = 1;
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
           return;
        }
        
    }
}

void bubbleSortNormal(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        printf("Working on pass number %d\n",i+1);
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        } 
    }
}
int main()
{

    int arr[] = {4, 8, 96, 5, 25, 46};
    // int arr[] = {1, 2 , 3, 4, 5, 6};
    int n = 6;
    printf("The unsorted array is \n");
    printArray(arr, 6);
    bubbleSortAdaptive(arr, 6);
    printArray(arr, 6);
    bubbleSortNormal(arr, 6);
    printArray(arr, 6);

    return 0;
}