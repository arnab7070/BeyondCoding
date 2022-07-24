#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i;
        long long int ans;
        for(i = 0; i <= 10; i++){
            if(pow(10,i)>n){
                i--;
                break;
            }
            if(pow(10,i)==n){
                ans = 0;
                break;
            }
        }
        ans = (n - pow(10,i));
        cout<<ans<<endl;
    }
    return 0;
}