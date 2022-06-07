#include<iostream>
#include <climits>
using namespace std;
int main(){

   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int arr[n];
       int foul[n];
       int result[n];
       int max = INT_MIN;
       for(int i = 0; i < n; i++){
           cin>>arr[i];
       }
       for(int i = 0; i < n; i++){
           cin>>foul[i];
       }
       for(int i = 0; i < n; i++){
           int result1 = (arr[i]*20 - foul[i]*10);
           if(result1>=0){
               result[i]=result1;
           }
           else{
               result[i]={0};
           }
       }
       for(int i = 0; i < n; i++){
           if(result[i]>max&&result[i]>=0){
               max = result[i];
           }
       }
       cout<<max<<endl;

   }

return 0;
}