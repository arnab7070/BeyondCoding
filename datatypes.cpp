#include<iostream>
using namespace std;

int main(){
    
    int a; //declaration
    a=12; //initialisation

    cout<<"size of int "<<sizeof(a)<<endl;

    float b;
    cout<<"size of float "<<sizeof(b)<<endl;

    char c;
    cout<<"size of character "<<sizeof(c)<<endl;

    bool d;
    cout<<"size of boolean "<<sizeof(d)<<endl;

    short int si;
    cout<<"size of short integer "<<sizeof(si)<<endl;

    long int li;
    cout<<"size of long integer "<<sizeof(li)<<endl;

    long long int lli;
    cout<<"size of long long integer "<<sizeof(lli)<<endl;
    
 return 0;
}