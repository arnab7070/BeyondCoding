#include <iostream>
using namespace std;

bool ternarySearch(int *arr, int key, int start, int end)
{
    if (start <= end)
    {
        int mid1 = start + (end - start) / 3;
        int mid2 = end - (end - start) / 3;
        // Now if key is found ---> Base case
        if (arr[mid1] == key || arr[mid2] == key)
            return true;
        // if key < arr[mid1]
        if (key < arr[mid1])
        {
            return ternarySearch(arr, key, start, mid1 - 1);
        }
        // if key > arr[mid2]
        else if (key > arr[mid2])
        {
            return ternarySearch(arr, key, mid2 + 1, end);
        }
        // otherwise it will only be in the middle portion of two mids
        else
        {
            return ternarySearch(arr, key, mid1 + 1, mid2 - 1);
        }
    }
    // if key is not found
    return false;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    ternarySearch(arr, key, 0, n) ? cout << "Element Found !!!" : cout << "Element doesn't exist";
    return 0;
}