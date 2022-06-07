// this code is not executing instead of having zero error. so please ignore the execution and focus on code.
#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter how many numbers you want to store: ";
   cin>>n;
   cout<<"Now Enter the values: "<<endl;
   int array[n];
   for (int i = 0; i < n; i++)
   {
       cin>>array[i];
   } 
   for (int i = 0; i <= n-1; i++)
   {
       for (int j = i+1; i <= n; j++)
       {
           if (array[j]<array[i])
           {
               int temp = array[j];
               array[j] = array[i];
               array[i] = temp;
           }  
       }   
   }
    for (int i = 0; i < n; i++)
   {
       cout<<array[i]<<" ";
   }
   cout<<endl;
return 0;
}
