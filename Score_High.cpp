#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[4];
        for(int i = 0; i < 4; i++){
            cin>>arr[i];
        }
        sort(arr,arr+4);
        cout<<arr[3]<<endl;
    } 
    return 0;
}