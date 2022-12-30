#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void bubbleSort(int arr[], int n)
{
    cout << "Sorting is in progress...\n";
    // Bubble Sort Technique: Bigger element will place at the last of the array
    // after swapping the elements

    // to make it adaptive we have to use a flag to check if swapping really happened
    // or not?? So we will now going to apply that
    for (int i = 0; i < n - 1; i++)
    {
        // cout << "Round No: " << i << endl;
        bool isSwapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                isSwapped = true;
                // cout << "Loop No: " << j << endl;
                // cout << "Swapping " << arr[i] << " & " << arr[j] << endl;
                swap(arr[i], arr[j]);
            }
        }
        if (isSwapped == false)
        {
            break;
        }
    }
    printArray(arr, n);
}

int main()
{
    int n;
    cout << "Enter the number of elements to store in the array: ";
    cin >> n;
    int arr[n]; // Declaring an array to store elements
    cout << "Now enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, n);

    return 0;
}