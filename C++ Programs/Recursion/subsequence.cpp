#include <iostream>
#include <vector>
using namespace std;
void printSubsequence(string str, int index, string result, vector<string> &list)
{
    // base case
    if (index >= str.length())
    {
        list.push_back(result);
        return;
    }
    printSubsequence(str, index + 1, result + str[index], list);
    printSubsequence(str, index + 1, result, list);
}
int main()
{
    string str;
    cin >> str;
    vector<string> list;
    string result = "";
    printSubsequence(str, 0, result, list);
    for (string s : list)
    {
        cout << s << " ";
    }
    return 0;
}