#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        if(arr[0]<10||arr[1]<10||arr[2]<10){
            cout<<"FAIL"<<endl;
        }
        else if(arr[0]+arr[1]+arr[2]<100){
            cout<<"FAIL"<<endl;
        }
        else{
            cout<<"PASS"<<endl;
        }
    }
    return 0;
}