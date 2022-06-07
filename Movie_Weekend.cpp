#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int count = 0;
        cin >> n;
        int arr1[n];
        int arr2[n];
        int max = INT_MIN;
        int min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        for (int i = 0; i < n; i++)
        {
            if ((arr1[i] * arr2[i]) > max)
            {
                max = arr1[i] * arr2[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if ((arr1[i] * arr2[i]) == max)
            {
                if (arr1[i] < min)
                {
                    min = arr1[i];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] == min && (arr1[i] * arr2[i]) == max)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}