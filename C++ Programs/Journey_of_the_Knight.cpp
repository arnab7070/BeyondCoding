#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int arr[4];
        for(int i = 0; i < 4; i++){
            cin>>arr[i];
        }
        if((abs(arr[0]-arr[2])%2==0&&abs(arr[1]-arr[3])%2==0)||(abs(arr[0]-arr[2])%2==1&&abs(arr[1]-arr[3])%2==1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}