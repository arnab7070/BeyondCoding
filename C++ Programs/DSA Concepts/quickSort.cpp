#include <iostream>
#include <algorithm>
using namespace std;
void printArray(int arr[], int size)
{
    cout << "Sorting in progress..." << endl;
    cout << "Printing the sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int partition(int arr[], int low, int high)
{
    // we assume pivot element as the last element
    int pivot = arr[high];
    // we initialize i as low-1
    int i = low - 1;
    // now we traverse the whole array
    for (int j = low; j < high; j++)
    {
        // now if arr[j] is smaller than pivot we need to
        // create a place for that element so we first
        // increase the i index value then just swap the
        // current 'i' indexTh value(arr[i]) with the arr[j] value
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    // now when we come out from the loop we need to increase
    // i value so that we can get the correct index for the pivot
    i++;
    // now just swap
    swap(arr[high], arr[i]);
    // int temp = arr[i];
    // // replace pivot with current arr[i] value
    // arr[i] = arr[high];
    // // replace arr[high] with arr[i] i.e temp
    // arr[high] = temp;
    // return the correct index position of pivot value
    return i;
}
void quickSort(int arr[], int low, int high)
{
    // In this algorithm we generally suppose pivot
    // element as the last element so we need to
    // sort the array like the leftside elements
    // of the pivot will always smaller than the pivit
    // and the right side elements are larger elements
    // than the pivot element. So we recursively call
    // the function so that our array gets sorted

    // if low < high then only we perform this operation
    if (low < high)
    {
        // we need to call the function so that we can
        // get the correct pivot index value
        int pivotIndex = partition(arr, low, high);
        // recursive call of the function
        // now sort left side elements
        quickSort(arr, low, pivotIndex - 1);
        // it's for the right side elements to be sorted
        quickSort(arr, pivotIndex + 1, high);
    }
}
int main()
{
    int arr[6] = {7, 2, 9, 5, 1, 4};
    quickSort(arr, 0, 5);
    printArray(arr, 5);

    return 0;
}