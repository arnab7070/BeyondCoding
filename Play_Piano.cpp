#include<iostream>
#include <string>
using namespace std;
int main(){

   int t;
   cin>>t;
   while(t--){
       string s;
       bool flag = false;
       cin>>s;
       int n = s.length();
       for (int i = 0; i < n; i+=2)
       {
           if((s[i]=='A'&&s[i+1]=='B')||(s[i]=='B'&&s[i+1]=='A')){
               flag = true;
           }
           else{
               flag = false;
               break;
           }
       }
       if(flag==true){
           cout<<"yes"<<endl;
       }
       else{
           cout<<"no"<<endl;
       }
   }

return 0;
}