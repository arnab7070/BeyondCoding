#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int rest = z-y;
        int ans = rest/x;
        cout<<ans<<endl;
    }
    return 0;
}