#include<iostream>
using namespace std;
int main(){

char button;
cout<<"Please input a character = ";
cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Namaste World!"<<endl;
        break;
    case 'b':
        cout<<"Hello World!"<<endl;
        break;
    case 'c':
        cout<<"Hola World!"<<endl;
        break;
    case 'd':
        cout<<"My World!"<<endl;
        break;
    case 'e':
        cout<<"Technical World!"<<endl;
        break;

    default:
        cout<<"Sorry, I can't understand. I am still learning."<<endl;
    }

return 0;
}