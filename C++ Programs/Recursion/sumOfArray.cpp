#include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int n, int i = 0)
{
    if (i == n)
        return 0;
    return arr[i] + sum(arr, n, i + 1);
}
int main()
{
    int arr[] = {4, 8, 5, 9, 10, 15};
    int n = sizeof(arr) / sizeof(int);
    cout << "Sum of the elements present in Array: " << sum(arr, n) << endl;
    return 0;
}