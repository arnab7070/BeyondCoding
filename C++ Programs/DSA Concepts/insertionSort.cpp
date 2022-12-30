#include <iostream>
#include <algorithm>
using namespace std;
// Uncomment the following lines for better visualization
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int current = arr[i];
        while (j >= 0 && current < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
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
    insertionSort(arr, 5);
    return 0;
}