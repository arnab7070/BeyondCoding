#include <iostream>
using namespace std;

int allPossiblePaths(int i, int j, int m, int n)
{
    // base case
    if (i == m - 1 && j == n - 1)
    {
        return 1;
    }
    if (i >= m || j >= n)
    {
        return 0;
    }
    return allPossiblePaths(i + 1, j, m, n) + allPossiblePaths(i, j + 1, m, n);
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << allPossiblePaths(0, 0, m, n) << endl;
    return 0;
}