#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void selectionSort(int arr[], int n)
{
    // Main Point: Here one swap will happen in one iteration
    // We should try to run a loop to find the minIndex of the
    // element and place it into right position after the loop
    // completes we just swap the minIndex element to the value
    cout << "Sorting in progress..." << endl;
    for (int i = 0; i < n; i++)
    {
        int smallest = arr[i];
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (smallest > arr[j])
            {
                // Updating the smallest element
                smallest = arr[j];
                // Updating the minIndex
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
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
    selectionSort(arr, n);
    return 0;
}