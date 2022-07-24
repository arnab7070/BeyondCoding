#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        int maximum = max(arr[0],max(arr[1],arr[2]));
        if(maximum==arr[0]){
            cout<<"Alice"<<endl;
        }
        else if(maximum==arr[1]){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Charlie"<<endl;
        }
    }
    return 0;
}