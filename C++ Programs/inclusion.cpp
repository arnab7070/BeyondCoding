#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number till what you want to check: ";
    cin>>n;
   for (int i = 1; i <= n; i++)
   {
       if (i%5==0 && i%7==0)
       {
           cout<<i<<" ";
       }
   }
return 0;
}