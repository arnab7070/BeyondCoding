#include<iostream>
using namespace std;
int main(){
   // int a=20;
   // int *aptr=&a;
   // cout<<a<<endl;
   // cout<<aptr<<endl;
   // cout<<*aptr<<endl;
   // *aptr=30;
   // cout<<a<<endl;
   // aptr++;
   // cout<<aptr<<endl;
   int array[]={10,20,30};
   //cout<<*array<<endl;
   int *ptr=array;
   for (int i = 0; i < 3; i++)
   {
      cout<<*ptr<<endl;
      ptr++;

   }
   

return 0;
}