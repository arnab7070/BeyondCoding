#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[j] - arr[i]) == k)
            {
                count++;
            }
            if ((arr[j] - arr[i]) > k)
            {
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}