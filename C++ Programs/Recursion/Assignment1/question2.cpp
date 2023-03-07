// - Find m-th summation of first n natural numbers where m-th summation of first n natural
// numbers is defined as following:
// If m > 1: SUM(n, m) = SUM(SUM(n, m - 1), 1)
// Else :SUM(n, 1) = Sum of first n natural numbers.
// Sample Input: n = 3, m = 2
// Sample Output: SUM(3, 2) = 21
// Explanation : SUM(3, 2)
// = SUM(SUM(3, 1), 1)
// = SUM(6, 1)
// = 21
#include <iostream>
using namespace std;
int SUM(int n, int m)
{
    // base case
    if (m == 1)
    {
        return (n * (n + 1)) / 2;
    }
    return SUM(SUM(n, m - 1), 1);
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << SUM(n, m) << endl;
    return 0;
}