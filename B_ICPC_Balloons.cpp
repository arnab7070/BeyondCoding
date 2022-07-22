#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        set<char> s;
        for(int i = 0; i < n; i++){
            s.insert(str[i]);
        }
        cout<<(s.size()*2)+(n-s.size())<<endl;
    }
    return 0;
}