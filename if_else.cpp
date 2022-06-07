#include<iostream>
using namespace std;

int main(){

    int savings;
    cout<<"Enter The Savings Amount You Have\n";
    cin>>savings;

    if(savings>5000){
        cout<<"You Should Go For A Tour. ";
        if(savings>8000){
            cout<<"Let's Go For Manali";
        } else {
            cout<<"Go For Ullhas";
        }
    } else if(savings>3000){
        cout<<"You Should Earn More Money For Going To A Tour";
    } else{
        cout<<"Chupchap Ghore Bose Khaaa";
    }
    return 0;
}