#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int zero_count = 0,count=0;
        
        int arr[n],brr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        for(int i = 0; i < n; i++){
            cin>>brr[i];
            if(brr[i]==0){
                zero_count++;
            }
        }
        if(n==1&&arr[0]<brr[0]){
            cout<<"NO"<<endl;
            continue;
        }
        int base; 
        for (int i = 0; i < n; i++)
        {
            if(brr[i]==0){
                continue;
            }
            else{
                base = arr[0]-brr[0];
                break;
            }
        }
        
        for(int i = 0; i < n; i++){
            if(brr[i]==0){
                continue;
            }
            if(arr[i]-brr[i]==base){
                count++;
            }
        }
        if(count == n-zero_count){

            cout<<"YES"<<endl;
        }
        else{

            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}