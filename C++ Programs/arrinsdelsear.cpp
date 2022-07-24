#include <iostream>
using namespace std;
void display(int array[], int n)
{
    //code for traversal
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
void indexDeletion(int array[], int size, int index)
{
    //Code for deletion
    for (int i = index; i < size - 1; i++)
    {
        array[i] = array[i + 1];
    }
}
int indexInsertion(int array[], int size, int index, int element)
{
    //Code for Insertion
    for (int i = size - 1; i >= index; i--)
    {
        array[i + 1] = array[i];
    }
    array[index] = {element};
    return 1;
}
bool searchArray(int array[], int element, int size)
{
    //Code for Linear Searching in array
    for (int i = 0; i < size - 1; i++)
    {
        if (array[i] == element)
        {
            cout << "Element is found!!!" << endl;
            return true;
        }
    }
    cout << "Element is not found!!!" << endl;
    return false;
}
int binarySearch(int array[], int size, int element)
{
    //Code for Binary Search in array
    int mid, low, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (array[mid] == element)
        {
            return mid;
        }
        if (array[mid] <= element)
        {
            low = mid + 1;
        }
        else
        {
            low = mid - 1;
        }
    }
    return -1;
}
int main()
{

    int array[] = {7, 15, 18, 20, 21, 22, 27};
    int size = 7, element = 13, index = 1;
    display(array, size);
    indexInsertion(array, size, index, element);
    size = size + 1;
    display(array, size);
    index = 2;
    indexDeletion(array, size, index);
    size = size - 1;
    display(array, size);
    cout<<"Running Linear Searching....."<<endl;
    element = 16;
    searchArray(array, element, size);
    cout<<"Running Binary Searching....."<<endl;
    element = 22;
    int searchIndex = binarySearch(array, size, element);
    cout << "The element is found at index " << searchIndex << endl;
    return 0;
}