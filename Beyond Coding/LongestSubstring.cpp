#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){

   string s;
   cin>>s;
   vector<int> dict(256, -1);
   int Maxlen = 0, start = -1;
   for(int i = 0; i<s.size(); i++){
       if(dict[s[i]]>start){
           start = dict[s[i]];
       }
       dict[s[i]] = i;
       Maxlen = max(Maxlen, i-start);
   }
    cout<<Maxlen<<endl;
return 0;
}