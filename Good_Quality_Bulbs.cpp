#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        int sum = 0;
        for(int i = 0; i < n-1; i++){
            int temp;
            cin>>temp;
            arr[i]=temp;
            sum = sum + temp;
        }
        if((sum/n)>=x){
            cout<<0<<endl;
        }
        else{
            cout<<(n*x)-sum<<endl;
        }
    }
    return 0;
}