#include <iostream>
using namespace std;
class Object{ 
public : 
int a;
void funcA()
{
    cout << "Func A is "<<a;
}

private:
int b;
void funcB()
{
    cout << "Func B\n";
}

protected:
int c;
void funcC()
{
    cout << "Func C\n";
}
};
int main()
{
    Object A;
    A.a = 2;
    A.funcA();
    /*THIS WILL NOT COMPILE THE CODE BECAUSE THIS IS PRIVATE OR PROTECTED*/
    
    //A.funcB; 
    //A.funcC;
    return 0;
}