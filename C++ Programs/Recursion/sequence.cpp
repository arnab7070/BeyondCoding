#include <iostream>
using namespace std;
void printSequence(int n)
{
    // Base Case
    if (n < 1)
        return;
    // Recursive Call
    printSequence(n - 1);
    cout << n << " ";
}
int main()
{
    int n;
    cin >> n;
    printSequence(n);
    return 0;
}