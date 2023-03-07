// Given a number n, print the following pattern without using any loop.
// Sample Input: n = 16
// Sample Output: 16, 11, 6, 1, -4, 1, 6, 11, 16

#include <iostream>
using namespace std;
void print(int n, int m, bool flag = false)
{
    // base case
    if (n <= 0)
    {
        flag = true;
    }
    cout << n << " ";
    if (flag == false)
        print(n - 5, m, flag);
    if (flag == true)
    {
        if (n == m)
        {
            return;
        }
        print(n + 5, m, flag);
    }
}
int main()
{

    int n;
    cin >> n;
    print(n, n);
    return 0;
}