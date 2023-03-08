#include <iostream>
using namespace std;

void KMultiples(int n, int k)
{
    // base case
    if (k == 0)
        return;
    KMultiples(n, k - 1);
    cout << n * k << " ";
}

int main()
{
    int n, k;
    cin >> n >> k;
    KMultiples(n, k);
    return 0;
}