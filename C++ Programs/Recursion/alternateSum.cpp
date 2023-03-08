#include <iostream>
#include <cmath>
using namespace std;

int alternateSum(int n)
{
    // base case
    if (n == 0)
        return 0;
    // recursive call
    return pow(-1, n - 1) * n + alternateSum(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << alternateSum(n) << endl;
    return 0;
}