#include <iostream>
using namespace std;
bool arr[26] = {false};
void removeDuplicates(string str, int index, string newString)
{
    // base case
    if (index == str.length())
    {
        cout << newString << endl;
        return;
    }
    char currentChar = str[index];

    if (arr[currentChar - 'a'] == true)
    {
        removeDuplicates(str, index + 1, newString);
    }
    else
    {
        newString += currentChar;
        arr[currentChar - 'a'] = true;
        removeDuplicates(str, index + 1, newString);
    }
}

int main()
{
    string str = "abassdma";
    removeDuplicates(str, 0, "");
    return 0;
}