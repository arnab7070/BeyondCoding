#include <iostream>
using namespace std;

void merge(int arr[], int low, int high)
{
    int mid = (low + high) / 2;
    int len1 = mid - low + 1;
    int len2 = high - mid;

    int arr1[len1], arr2[len2];
    int mainArrayIndex = low;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[mainArrayIndex++];
    }
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = low;
    int index1 = 0, index2 = 0;
    while (index1 < len1 && index2 < len2)
    {
        if (arr1[index1] < arr2[index2])
        {
            arr[mainArrayIndex++] = arr1[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = arr2[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainArrayIndex++] = arr1[index1++];
    }
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = arr2[index2++];
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, high);
    }
}

int main()
{
    int arr[] = {4, 2, 8, 9, 8, 7, 8, 1, 5, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
