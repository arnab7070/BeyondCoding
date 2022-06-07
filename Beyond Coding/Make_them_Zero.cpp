#include<iostream>
#include<climits>
using namespace std;
bool isPowerofTwo(int n)
{
    if (n == 0)
        return 0;
    if ((n & (~(n - 1))) == n)
        return 1;
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int max_two = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            if(isPowerofTwo(temp)){
                if(temp>max_two){
                    max_two = temp;
                }
            }
            arr[i] = temp;
        }
        
    }
    
    return 0;
}