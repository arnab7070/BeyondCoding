#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int count = 1;
    char store;
    sort(str.begin(),str.end());
    bool flag = false;
    for(int i = 0; i < str.size(); i++){
        store = str[i];
        if(str[i]==str[i+1]){
            count++;
            flag = true;
        }
        else{
            flag = false;
        }
        if(flag==false){
            if(count>1){
            cout<<store<<", count = "<<count<<endl;
            }
            count = 1;
        }
    }
    return 0;
}   