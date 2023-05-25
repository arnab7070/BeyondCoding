#include <iostream>
using namespace std;

void merge(int *arr, int low, int high)
{
    int mid = (low + high) / 2;
    int l1 = mid - low + 1;
    int l2 = high - mid;
    int arr1[l1], arr2[l2];
    int mai = low;
    for (int i = 0; i < l1; i++)
    {
        arr1[i] = arr[mai++];
    }
    int idx2 = 0; // Initialize idx2 for the second half of the array
    for (int i = 0; i < l2; i++)
    {
        arr2[i] = arr[mai++];
        idx2++;
    }
    mai = low;
    int idx1 = 0;
    idx2 = 0; // Reset idx2 to 0
    while (idx1 < l1 && idx2 < l2)
    {
        if (arr1[idx1] < arr2[idx2])
        {
            arr[mai++] = arr1[idx1++];
        }
        else
        {
            arr[mai++] = arr2[idx2++];
        }
    }
    while (idx1 < l1)
    {
        arr[mai++] = arr1[idx1++];
    }
    while (idx2 < l2)
    {
        arr[mai++] = arr2[idx2++];
    }
}

void mergeSort(int *arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, high);
}

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {4, 5, 9, 1, 38, 1, 3, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    mergeSort(arr, 0, n - 1);
    display(arr, n);
    return 0;
}
