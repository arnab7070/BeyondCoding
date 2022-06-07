#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter a positive number\n";
    while(n>0){
        cout<<"You entered "<<n<<endl;
        cout<<"Enter another positive number\n";
        cin>>n;
    }
cout<<"Sorry, You entered a negative number.";
return 0;
}