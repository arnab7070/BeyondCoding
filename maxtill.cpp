#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter how many numbers you want to store in memory: ";
   cin>>n;
   cout<<"Now enter your values...."<<endl;
   int array[n];
   for (int i = 0; i < n; i++)
   {
       cin>>array[i];
   }
    int mx;
   for (int i = 0; i < n; i++)
   {
       mx = max(mx, array[i]);
       cout<<"Your Max Till I'th values are = "<<mx<<" ";
   }
return 0;
}