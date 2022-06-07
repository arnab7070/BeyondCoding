#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y;
        int ans;
        cin>>x>>y;
        if(y%x==0){
            ans = (y/x)-1;
        }
        else{
            ans = y/x;
        }
        cout<<ans<<endl;
    } 
    return 0;
}