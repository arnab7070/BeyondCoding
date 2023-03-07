#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int n)
{
    if (n < 0)
    { // negative numbers are not palindromes
        return false;
    }
    int div = 1;
    while (n / div >= 10)
    {
        div *= 10;
    }
    while (n > 0)
    {
        int left = n / div;
        int right = n % 10;
        if (left != right)
        {
            return false;
        }
        n = (n % div) / 10;
        div /= 100;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    cout << isPalindrome(n) << endl;
    return 0;
}