#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int maxt,maxn,maxs;
        cin>>maxt>>maxn>>maxs;
        int count = 0;
        int extra = 0;
        while(maxs>0&&count<maxt){
            if(maxs<maxn){
                extra = maxs;
                break;
            }
            maxs-=maxn;
            count++;
        }
        int ans = 0;
        for(int i = 0; i < count; i++){
            ans += pow(maxn,2);
        }
        ans += pow(extra,2);
        cout<<ans<<endl;
    }
    return 0;
}