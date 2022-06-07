#include <iostream>
using namespace std;

int incrementByOne(int n)
{
    int curr;
    curr = n % 10;
    if (curr == 9)
    {
        curr = 0;
    }
    else
    {
        curr = curr + 1;
    }
    return curr;
}
int main()
{

    int n = 49895;
    int a = incrementByOne(n); // now value stores in a = 6
    n = n / 10; // now n = 4989
    int b = incrementByOne(n); // now value stores in b = 0
    n = n / 10; // now n = 498
    int c = incrementByOne(n); // now value stores in c = 9
    n = n / 10; // now n = 49
    int d = incrementByOne(n); // now value stores in d = 0
    n = n / 10; // now n = 4
    int e = incrementByOne(n); // now value stores in e = 5

    n = (e * 10000 + d * 1000 + c * 100 + b * 10 + a); //updating the value of n
    cout << n;

    return 0;
}
//burdwansagnik2003