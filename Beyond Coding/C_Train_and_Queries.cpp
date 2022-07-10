//it's not the optimal solution means this code will give TLE error
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        while(q--){
            int x,y;
            cin>>x>>y;
            int check = 0, yes = 0;
            for(int i = 0; i<n-1; i++){
                for(int j = i+1; j < n; j++){
                    if(arr[i]==x && arr[j]==y){
                        check = 1;
                        yes = 1;
                        break;
                    }
                }
                if(check){
                    break;
                }
            }
            if(yes){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}