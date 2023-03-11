#include <iostream>
using namespace std;

void subsequence(string str, int index, string newString)
{
    // base case
    if (index == str.length())
    {
        cout << newString << " ";
        return;
    }
    // we have the choice
    subsequence(str, index + 1, newString + str[index]);
    subsequence(str, index + 1, newString);
}

int main()
{
    string str = "abc";
    subsequence(str, 0, "");
    return 0;
}