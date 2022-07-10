#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int req = x-y;
        if(x-y<=0){
            cout<<"0"<<endl;
        }
        else{
            if(req%4==0){
                cout<<req/4<<endl;
            }
            else{
                cout<<1+(req/4)<<endl;
            }
        }
    }
    return 0;
}