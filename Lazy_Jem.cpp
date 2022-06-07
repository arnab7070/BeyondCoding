#include<iostream>
#include<cmath>
using namespace std;
int main(){

   int t;
   cin>>t;
   while(t--){
       long long int n,b,m,x=0,i=0;
       long long int res=0;
       cin>>n>>b>>m;
       while (n>=1)
       {
           i++;
           if(n%2==0){
               x = n/2;
           }
           else{
               x = (n+1)/2;
           }
           res = res + x*m;
           res = res + b;
           m = m*2;
           n = n - x;

       }
       cout<<res - b<<endl;
   }

return 0;
}