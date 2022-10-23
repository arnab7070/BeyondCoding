#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    map<string,int> mp;
    map<string,int> :: iterator it;

    while(t--){
        int x;
        string str;
        cin>>x>>str;
        switch (x) {
        case 1:
            int n;
            cin>>n;
            mp[str]+=n;
            break;
        case 2:
            it=mp.find(str);
            if(it!=mp.end()){
                it->second = 0;
            }
            break;
        case 3:
            if(mp.find(str)!=mp.end()){
                cout<<mp.find(str)->second<<endl;
                break;
            }
            cout<<"0"<<endl;
            break;
        }
    }   
    return 0;
}
