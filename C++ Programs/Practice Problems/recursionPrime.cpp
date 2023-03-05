#include <iostream>
using namespace std;
bool isPrime(int n, int i = 2)
{
    // If n equals to 2 then return true directly
    if (n == 2)
    {
        return true;
    }
    // If n divided by i equals to 0 then return false
    if (n % i == 0)
    {
        return false;
    }
    // If at any time current i^2 > n then no need to find anymore, directly return false
    if (i * i > n)
    {
        return true;
    }
    // Call for the next divisor by recursive method
    return isPrime(n, i + 1);
}
int main()
{
    int n;
    cin >> n;
    // 1 means true & 0 means false
    cout << isPrime(n) << endl;
    return 0;
}