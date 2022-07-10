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
        int arr1[n];
        int arr2[n];
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin>>arr1[i];
        }
        for(int i = 0; i < n; i++){
            cin>>arr2[i];
        }
        for(int i = 0; i < n; i++){
            if(arr2[i]<arr1[i]){
                swap(arr1[i],arr2[i]);
            }
        }
        for(int i = 0; i < n-1; i++){
            sum = sum + abs(arr1[i]-arr1[i+1]);
        }
        for(int i = 0; i < n-1; i++){
            sum = sum + abs(arr2[i]-arr2[i+1]);
        }
        cout<<sum<<endl;
    }
    return 0;
}