#include<iostream>
using namespace std;
int main(){

   int t;
   cin>>t;
   while(t--){
       int x,y;
       cin>>x>>y;
       int ans = (21-x-y);
       if(ans>10){
           cout<<-1<<endl;
       }
       else{
           cout<<ans<<endl;
       }
   }

return 0;
}