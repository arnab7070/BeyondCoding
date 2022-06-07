#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

void stackUsingQueue_Method1(int num1, int num2)
{
    queue<int> q1;
    queue<int> q2;

    for (int i = num1; i <= num2; i++)
    {
        q2.push(i);
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        // swap(q1, q2);
        q1.swap(q2);
    }
    for (int j = num1; j <= num2; j++)
    {
        cout << q1.front() << " ";
        q1.pop();
    }
}
void stackUsingQueue_Method2(int num1, int num2)
{
    queue<int> q1;
    queue<int> q2;
    for (int i = num1; i <= num2; i++)
    {
        q1.push(i);
    }
    for (int i = num1; i <= num2; i++)
    {
        while (q1.front() != q1.back())
        {

            q2.push(q1.front());
            q1.pop();
        }
        cout << q1.front() << " ";
        q1.pop();
        q1.swap(q2);
    }
}
int main()
{
    stackUsingQueue_Method1(5, 10);
    cout << endl;
    stackUsingQueue_Method2(5, 10);
    return 0;
}