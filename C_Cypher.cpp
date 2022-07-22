#include<bits/stdc++.h>
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
        for(int i = 0; i < n; i++){
            int x;cin>>x;
            string s;cin>>s;
            int temp = arr[i];
            for(int j = 0; j < x; j++){
                if(s[j]=='D'){
                    temp += 1;
                    if(temp==10){
                        temp=0;
                    }
                }
                else if(s[j]=='U'){
                    temp -= 1;
                    if(temp == -1){
                        temp=9;
                    }
                }
            }
            arr[i] = temp;
        }

        for(int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}