#include <iostream>
using namespace std;
static int count = 0;
void moveAllX(string str, int index, char x)
{
    // base case
    if (index == str.length())
    {
        for (int i = 0; i < count; i++)
        {
            cout << x;
        }
        return;
    }
    // self work
    if (char(str[index]) != x)
    {
        cout << str[index];
    }
    else
    {
        count++;
    }
    moveAllX(str, index + 1, x);
}

int main()
{
    string str = "xaxcxbgdx";
    moveAllX(str, 0, 'x');
    return 0;
}