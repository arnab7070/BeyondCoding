#include<iostream>
using namespace std;
int main(){

    cout<<"Please Enter The Times In 24 Hrs. Format \n";
    float A;
    cout<<"Enter the starting time = ";
    cin>>A;

    float B;
    cout<<"Enter the ending time = ";
    cin>>B;

    float S=B-A;

    cout<<"Total Minutes between these times is = "<<S*60;


    return 0;
}