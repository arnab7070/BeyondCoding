#include <bits/stdc++.h>
using namespace std;
void reverseInGroup(vector<long long> &arr, int k, int n)
{
    vector<long long> ans;
    for (int i = 0; i < n; i += k)
    {
        stack<long long> st;
        for (int j = 0; j < k; j++)
        {
            if (i + j >= n)
            {
                break;
            }
            st.push(arr[i + j]);
        }
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
    }
    arr = ans;
}
int main()
{
    vector<long long> arr = {1, 2, 3, 4, 5, 6};
    reverseInGroup(arr, 3, 6);
    return 0;
}