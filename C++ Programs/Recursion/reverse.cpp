#include <iostream>
using namespace std;
int reverse(int num)
{
    if (num % 10 == num)
        return num;
    cout << num % 10;
    return reverse(num / 10);
    cout << endl;
}
int main()
{
    int num;
    cin >> num;
    cout << reverse(num) << endl;
    return 0;
}