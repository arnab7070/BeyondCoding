#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,flag=0;
        cin>>n;
        vector<string> str(n);
        for(int i = 0; i < n; i++){
            cin>>str[i];
        }
        vector<string> s;
        for(int i = 0; i < n; i++){
            
            for(int j = 0; j < n; j++){
                string temp = str[i];
                if(i==j){
                    continue;
                }
                s.push_back(temp.append(str[j]));
                temp.clear();
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < s.size(); j++){
                if(str[i]==s[j]){
                    flag = 1;
                    break;
                }
            }
            if(flag==1){
                cout<<1;
            }
            if(flag==0){
                cout<<0;
            }
        }

        cout<<endl;
    }
    return 0;
}