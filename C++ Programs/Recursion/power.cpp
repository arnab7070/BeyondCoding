#include <bits/stdc++.h>
using namespace std;
int power(int x, int y)
{
    // Base Case
    if (y == 0)
        return 1;
    return x * pow(x, y - 1);
}
int main()
{
    int x, y;
    cin >> x >> y;
    cout << power(x, y) << endl;
    return 0;
}