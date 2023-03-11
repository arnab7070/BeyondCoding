#include <iostream>
using namespace std;
bool search(int *arr, int index, int n, int element)
{
    // base case
    if (index == n)
        return false;
    if (element == arr[index])
        return true;
    search(arr, index + 1, n, element);
}
int main()
{
    int arr[] = {4, 12, 54, 14, 3, 8, 6, 1};
    int n = sizeof(arr) / sizeof(int);
    int element = 14;
    cout << search(arr, 0, n, element) << endl;
    return 0;
}