#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter Your Number To Reverse: ";
    cin>>n;

    int reverse = 0;

    while (n>0)
    {
        int lastdigit = n%10;
        reverse = 10*reverse + lastdigit;
        n = n/10;
    }

    cout<<"The Reversed Number Is = "<<reverse<<endl;
    
return 0;
}