#include <bits/stdc++.h>
using namespace std;
int maxInArray(int arr[], int n, int i = 0)
{
    // base case
    if (n == 1)
        return arr[i];
    return max(arr[i], maxInArray(arr, n - 1, i + 1));
}
// Minimum in array is also possible by recursion
int minInArray(int arr[], int n, int i = 0)
{
    // base case
    if (n == 1)
        return arr[i];
    return min(arr[i], minInArray(arr, n - 1, i + 1));
}
int main()
{
    int arr[] = {4, 5, 1, 6, 4, 65, 1, 645, 47};
    cout << "Maximum is: " << maxInArray(arr, sizeof(arr) / sizeof(int)) << endl;
    cout << "Minimum is: " << minInArray(arr, sizeof(arr) / sizeof(int)) << endl;
    return 0;
}