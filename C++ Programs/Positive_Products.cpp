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
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        int count = 0;

        // sort(arr,arr+n);
        // int i = 0;
        // int ans = 0;
        // while(arr[i]<0&&i<n){
        //     ans = ans + i;
        //     i++;
        // }
        // if(arr[i]==0){
        //     i++;
        // }
        // int newIndex = 0;
        // while(arr[i]>0&&i<n){
        //     ans = ans + newIndex;
        //     newIndex++;
        //     i++;
        // }
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(arr[i]*arr[j]>0){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}