#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n, int i = 0)
{
    if (i == n)
        return;
    cout << arr[i] << " ";
    print(arr, n, i + 1);
}

int main()
{
    int arr[] = {4, 8, 5, 9, 10, 15};
    int n = sizeof(arr) / sizeof(int);
    print(arr, n);
    return 0;
}