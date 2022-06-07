#include <iostream>
#include <climits>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int arr[x];
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        int y;
        cin >> y;
        int brr[y];
        int result[1000] = {0};
        int k = 0;
        for (int i = 0; i < y; i++)
        {
            cin >> brr[i];
        }
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < x; j++)
            {
                if (arr[j] == brr[i])
                {
                    result[k] = {j};
                    k++;
                    break;
                }
            }
        }
        bool flag = false;
        for (int i = 1; i < k; i++)
        {
            if (result[i - 1] < result[i])
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (k == 1 && y > k)
        {
            cout << "No" << endl;
        }
        else if (flag == true)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}