#include <iostream>
using namespace std;
int sum(int number)
{
    // Base Case
    if (number % 10 == number)
        return number;
    return number % 10 + sum(number / 10);
}
int main()
{
    int number;
    cin >> number;
    cout << sum(number) << endl;
    return 0;
}