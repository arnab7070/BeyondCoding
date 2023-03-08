#include <iostream>
#include <cmath>
using namespace std;
int isArmstrong(int n, int d)
{
    // base case
    if (n == 0)
        return 0;
    int lastDigit = n % 10;
    return pow(lastDigit, d) + isArmstrong(n / 10, d);
}
int main()
{
    int n;
    cin >> n;
    int temp = n;
    int number_of_digits = 0;
    while (temp > 0)
    {
        number_of_digits++;
        temp /= 10;
    }
    if (n == isArmstrong(n, number_of_digits))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}