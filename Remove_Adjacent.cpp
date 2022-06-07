#include <bits/stdc++.h>
using namespace std;
int maxArray(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        bool flag = false;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int max = maxArray(arr, n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] + arr[i + 1] == max)
            {
                count++;
                arr[i] = max;
                for (int j = i + 1; j < n - 1; j++)
                {
                    arr[j] = arr[j + 1];
                }
            }
            else if (n == 2)
            {
                if(arr[i]!=arr[i+1]){
                    count = 1;
                }
                else{
                    count = 0;
                }
            }
        }
            cout << count << endl; 
    }

    return 0;
}