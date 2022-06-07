#include<iostream>
#include<cmath>
using namespace std;
int main(){

   int t;
   cin>>t;
   while(t--){
       int n,v1,v2;
       cin>>n>>v1>>v2;
       float distance = n*sqrt(2);
       float t1 = distance/(float)v1;
       float t2 = 2*(float)n/(float)v2;
       if(t1>t2){
           cout<<"Elevator"<<endl;
       } 
       else{
           cout<<"Stairs"<<endl;
       }
   }

return 0;
}