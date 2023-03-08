#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    // if b>a then we need to swap the position.
    if (b > a)
        return GCD(b, a);
    // base case
    if (b == 0)
        return a;
    // recursive call
    return GCD(a - b, b);
    // return (b, a % b);
}

int main()
{
    cout << GCD(11, 108) << endl;
    return 0;
}