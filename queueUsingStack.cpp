#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void queueUsingStack(int num1, int num2)
{
    stack<int> s1;
    stack<int> s2;

    for (int i = num1; i <= num2; i++)
    {
        s1.push(i);
    }
    if (s1.empty() && s2.empty())
    {
        cout << "No elements in queue\n";
    }
    else if (s2.empty())
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
    }
    while (!s2.empty())
    {
        cout << s2.top() << endl;
        s2.pop();
    }
}
int main()
{
    queueUsingStack(5,10);

    return 0;
}