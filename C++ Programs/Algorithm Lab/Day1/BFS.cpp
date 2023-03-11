#include <iostream>
#define MAX 100
using namespace std;

int arr[MAX] = {0};
int front = -1, rear = -1;

bool isEmpty()
{
    return front == rear;
}

void enque(int element)
{
    arr[++rear] = element;
}

void del()
{
    if (isEmpty())
    {
        return;
    }
    front++;
    cout << arr[front] << " ";
}

int main()
{
    enque('A');
    del();
    return 0;
}