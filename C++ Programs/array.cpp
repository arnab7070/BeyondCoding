#include<iostream>
using namespace std;
void indexInsertion(int array[], int index, int element, int size){
for (int i = index; i < size; i++)
{
    array[i+1]=array[i];
}
array[index]=element;
}
int main(){

   int n;
   cout<<"Enter the Number you want to store in memory: ";
   cin>>n;
   cout<<"Now enter your desired values in increasing order...."<<endl;

   int array[n];
   for (int i = 0; i < n; i++)
   {
       cin>>array[i];
   }
   
   cout<<"Your Entered Values are"<<endl;
   for (int i = 0; i < n; i++)
   {
       cout<<array[i]<<" ";
   }
   indexInsertion(array, 4, 6, 8);

return 0;
}