#include <bits/stdc++.h>
using namespace std;
int power(int x, int y)
{
    // Base Case
    if (y == 0)
        return 1;
    return x * pow(x, y - 1);
}
int optimizedPower(int p, int q)
{
    // base case
    if (q == 0)
        return 1;
    if (q % 2 == 0)
    {
        int result = optimizedPower(p, q / 2);
        return result * result;
    }
    else
    {
        int result = optimizedPower(p, (q - 1) / 2);
        return p * result * result;
    }
}
int main()
{
    int x, y;
    cin >> x >> y;
    cout << "Normal Approach: " << power(x, y) << endl;
    cout << "Optimized Approach: " << optimizedPower(x, y) << endl;
    return 0;
}