// Find the minimum possible total cost incurred before the frog reaches Stone N.
// Input n = 4 arr[] = {10,30,40,20};
// Output = 30
// If we follow the path 1 → 2 → 4, the total cost incurred would be ∣10−30∣ + |30−20∣ = 30.
#include <iostream>
#include <cmath>
using namespace std;

int frogJump(int *arr, int index, int n)
{
    // base case
    if (index == n - 1)
        return 0;
    if (index == n - 2)
        return frogJump(arr, index + 1, n) + abs(arr[index] - arr[index + 1]);
    // recursive call
    return min(frogJump(arr, index + 1, n) + abs(arr[index] - arr[index + 1]), frogJump(arr, index + 2, n) + abs(arr[index] - arr[index + 2]));
}

int main()
{
    int arr[] = {10, 30, 40, 20};
    int n = sizeof(arr) / sizeof(int);
    cout << frogJump(arr, 0, n) << endl;
    return 0;
}