#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   int cases = 0;
   while(t--){
       cases++;
       int x,y;
       cin>>x>>y;
       int total = 0;
       int arr[x];
       for(int i = 0; i<x; i++){
           cin>>arr[i];
       }
       for(int i = 0; i<x; i++){
           total = total + arr[i];
       }
       cout<<"Case #"<<cases<<": "<<total%y<<endl;
   }
return 0;
};