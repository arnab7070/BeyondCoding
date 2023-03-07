#include <iostream>
using namespace std;
bool isPalindrome(string str, int start, int end)
{
    // base case
    if (start >= end)
    {
        return true;
    }
    // break case
    if (str[start] != str[end])
    {
        return false;
    }

    return isPalindrome(str, start + 1, end - 1);
}
int main()
{
    string str;
    cin >> str;
    cout << isPalindrome(str, 0, str.length() - 1) << endl;
    return 0;
}