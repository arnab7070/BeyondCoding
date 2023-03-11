#include <iostream>
using namespace std;

void printSubsetSum(int *arr, int n, int index, int result = 0)
{
    // base case
    if (index == n)
    {
        cout << result << " ";
        return;
    }
    printSubsetSum(arr, n, index + 1, result + arr[index]);
    printSubsetSum(arr, n, index + 1, result);
}

int main()
{
    int arr[] = {2, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    printSubsetSum(arr, n, 0);
    return 0;
}