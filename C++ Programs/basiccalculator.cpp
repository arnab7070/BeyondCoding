#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;
    char button;
    cout<<"What Operation Do You Want? (+,-,*,/)"<<endl;
    cin>>button;
    switch (button)
    {
    case '+':
        cout<<"The Sum Is = "<<a+b<<endl;
        break;
    case '-':
        cout<<"The Substraction Is = "<<a-b<<endl;
        break;
    case '*':
        cout<<"The Multiplication Is = "<<a*b<<endl;
        break;
    case '/':
        cout<<"The Division Is = "<<a/b<<endl;
        break;
    
    default:
        cout<<"Sorry I can't do this operation. Please enter a valid opeartion.";
        break;
    }
return 0;
}