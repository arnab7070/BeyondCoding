#include<iostream>
using namespace std;
int fact(int n){
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial*=i;
    }
    return factorial;
}
int main(){

    int n,r;
    cout<<"Please enter the value of n: ";
    cin>>n;
    cout<<"Please enter the value of r: ";
    cin>>r;
    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<"The value of "<<n<<"C"<<r<<" is = "<<ans;

return 0;
}