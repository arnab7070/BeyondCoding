#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    cout<<"Enter First Number\n";
    cin>>a;
    cout<<"Enter Second Number\n";
    cin>>b;
    cout<<"Enter Third Number\n";
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<"The maximum of three number is "<<a; 
        } else {
            cout<<"The maximum of three number is "<<c;
        }
    }
    else {
        if(b>c){
            cout<<"The maximum of three number is "<<b;
        } else {
            cout<<"The maximum of three number is "<<c;
        }
    }

    return 0;

}