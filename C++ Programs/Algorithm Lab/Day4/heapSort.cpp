#include <iostream>
#include <climits>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (i != largest)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[i], arr[0]);
        heapify(arr, i, 0);
    }
    cout << "The sorted array will look like: ";
    print(arr, n);
}

int main()
{
    int n;
    cout << "Enter the number of elements you want to insert in array: ";
    cin >> n;
    int arr[n];
    cout << "Now enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    heapSort(arr, n);
    return 0;
}