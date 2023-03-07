#include <iostream>
using namespace std;
string removeChar(string str, int n, int i = 0)
{
    // base case
    if (i == n)
        return "";
    // recursive call
    if (str[i] == 'a')
    {
        return "" + removeChar(str, n, i + 1);
    }
    else
    {
        return str[i] + removeChar(str, n, i + 1);
    }
}
int main()
{
    string str;
    cin >> str;
    cout << removeChar(str, str.length()) << endl;
    return 0;
}