#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,m,n;
        cin>>x>>y>>m>>n;
        if(n/y>=m){
            cout<<0<<" "<<m<<endl;
        }
        else if(n/x<m){
            cout<<-1<<endl;
        }
        else{
            int l = (n-(y*m))/(x-y);
            if(((n-(y*m))%(x-y))!=0){
                l++;
                cout<<l<<" "<<m-l<<endl;
            }
        }
    }
    return 0;
}