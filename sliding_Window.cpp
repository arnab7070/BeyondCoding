#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
// -2 10 1 3 2 -1 4 5
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int minimum = INT_MAX;
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += arr[i];
    }
    // cout<<sum<<" ";
    minimum = min(minimum,sum);
    //sliding window technique
    for(int i = 1; i <= n-k; i++){
        
        sum -= arr[i-1]; //substract prev value
        sum += arr[i+k-1]; //add next value
        // sum = sum + arr[0] + arr[0+3-1]
        minimum = min(sum,minimum);
        // cout<<sum<<" ";

    }
    // cout<<endl;
    cout<<minimum<<endl;
    return 0;
}