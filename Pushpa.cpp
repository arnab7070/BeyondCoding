#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],c=0;
        map<int,int> m;
        for(int i = 0; i < n; i++){
            cin>>arr[i];
            c = max(c,arr[i]);
            m[arr[i]]++;
        }
        for(int i = 0; i < n; i++){
            c = max(c,arr[i]+m[arr[i]]-1);
        }
        cout<<c<<endl;
    }
    return 0;
}