#include<iostream>
using namespace std;
int main(){

   int n;
//    cout<<"Enter how many numbers you want to store: ";
   cin>>n;
//    cout<<"Now enter the values....."<<endl;
   int array[n];
   for (int i = 0; i < n; i++)
   {
       cin>>array[i];
   }

   int counter = 1;
   while (counter<n)
   {
       for (int i = 0; i <= n-counter; i++)
       {
           if(array[i]>array[i+1]){
               int temp = array[i];
               array[i]=array[i+1];
               array[i+1]=temp;
           }
       }
       counter++;
   }
   
//    cout<<"Running the sorting process....."<<endl;
//    cout<<"The sorted values are"<<endl;
   for (int i = 0; i < n; i++)
   {
       cout<<array[i]<<" ";
   }
   

return 0;
}