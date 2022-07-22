#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ans = 0;
        if(n%2==0&&m%2==0){
            ans = 0;
        }
        else if(n%2==0&&m%2==1){
            ans = n;
        }
        else if(n%2==1&&m%2==0){
            ans = m;
        }
        else{
            ans = m+n-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}