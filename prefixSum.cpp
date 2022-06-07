#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int prefixSum = 0;
    map<int,int> mp;
    for(int i = 0; i < n; i++){
        prefixSum = arr[i];
        mp[prefixSum]++;
    }
    int ans = 0;
    map<int,int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        int s = it->second;
        ans += (s*(s-1))/2;
        if(it->first==0){
            ans += it->second;
        }
    }
    cout<<ans<<endl;
    return 0;
}