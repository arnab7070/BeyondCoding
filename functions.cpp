#include<iostream>
using namespace std;

 int sum(int a, int b){
        int c = a + b;
        return c;
    }

int main(){
    int num1,num2;
    cout<<"Enter your first number = ";
    cin>>num1;
    cout<<"Enter your second number = ";
    cin>>num2;
    cout<<"The sum of these two number is = "<<sum(num1, num2)<<endl;
return 0;
}