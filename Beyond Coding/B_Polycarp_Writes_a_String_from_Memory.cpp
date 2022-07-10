#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        set<char> s;
        int i = 0,count=0;
        for(i = 0; i < str.length(); i++){
            s.insert(str[i]);
            if(s.size()==4){
                s.clear();
                count++;
                s.insert(str[i]);
            }
        }
        cout<<count+1<<endl;
    }
    return 0;
}