/*
Algorithm for Binary Search:

Start with a sorted array of n elements and a search key.
Initialize two variables, start and end, to the beginning and end of the array, respectively.
Repeat the following steps until start is greater than end:
    a. Calculate the index of the middle element as mid = (start + end) / 2.
    b. If the element at mid is equal to the search key, return true.
    c. If the element at mid is less than the search key, set start = mid + 1.
    d. If the element at mid is greater than the search key, set end = mid - 1.
If the search key is not found after the loop, return false.
Note: The array must be sorted in ascending order for binary search to work correctly.
*/
#include <iostream>
using namespace std;

bool binarySearch(int *arr, int start, int end, int key)
{
    int mid = start + (end - start) / 2;
    // base case
    if (arr[mid] == key)
    {
        return true;
    }
    if (start == end - 1)
        return false;

    // mid calculation

    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, end, key);
    }

    else
    {
        return binarySearch(arr, start, mid, key);
    }
}

int main()
{
    int arr[] = {1, 4, 8, 9, 12, 18, 26};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cout << "Enter the value to search: ";
    cin >> key;
    binarySearch(arr, 0, n, key) ? cout << "Yes Present\n" : cout << "Not Present\n";
    return 0;
}