#include <iostream>
using namespace std;

void towerOfHanoi(int n, char src, char aux, char dest)
{
    // base case
    if (n == 1)
    {
        cout << "Move Disk " << n << " from " << src << " to " << dest << endl;
        return;
    }
    // recursive call
    towerOfHanoi(n - 1, src, dest, aux);
    cout << "Move Disk " << n << " from " << src << " to " << dest << endl;
    towerOfHanoi(n - 1, aux, src, dest);
}

int main()
{
    int n;
    cin >> n;
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}