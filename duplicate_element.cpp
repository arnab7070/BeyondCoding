#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[5] = {8,5,9,8,7};
   bool flag = false;
   sort(arr, arr+5);
   for (int i = 0; i < 4; i++)
   {
       if(arr[i]==arr[i+1]){
           cout<<arr[i];
           flag = true;
           break;
       }
   }
   if(flag==false)
   {
       cout<<"No Duplicate Element Present In This Array";
   }
return 0;
}