#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int count = n-1;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for(int i = n-1; i >= 0; i--){
            if(arr[i]!=0){
                break;
            }
            else if(arr[i]==0){
                count--;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}