#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        string str1 = str.substr(0, 0 + (str.size() / 2));
        string str2;
        if (str.size() % 2 == 0)
        {
            str2 = str.substr((str.size() / 2), str.size());
        }
        else
        {
            str2 = str.substr((str.size() / 2) + 1, str.size());
        } 
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
        if(str1.compare(str2)==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}