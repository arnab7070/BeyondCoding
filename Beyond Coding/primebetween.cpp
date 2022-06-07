#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){
    if(num==1){
        return false;
    }
    for (int i = 2; i <=sqrt(num); i++)
    {
        if (num%i==0)
        {
            return false;
        }
        
    }
    return true;
}
int main(){

    int a,b;
    // cout<<"Enter the lower bound: ";
    cin>>a;
    // cout<<"Enter the upper bound: ";
    cin>>b;

    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout<<i<<" ";
        }
        
    }
return 0;
}