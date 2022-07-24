#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int &i: arr){
        cin>>i;
    }
    sort(arr.begin(),arr.end());
    long long min = 0, max = 0;
    for(int i = 0; i < n/2; i++){
        max += arr[i+n/2] - arr[i];
        min += arr[2*i + 1] - arr[2*i];
    }
    cout<<max<<" "<<min<<endl;
    return 0;
}