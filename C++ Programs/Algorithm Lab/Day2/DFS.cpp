#include <iostream>
#include <fstream>
#include <climits>
#define MAX 10
using namespace std;

int arr[MAX] = {0};
int top = -1;

bool isEmpty()
{
    return top == -1;
}

void push(int element)
{
    arr[++top] = element;
}

int pop()
{
    if (isEmpty())
    {
        return INT_MIN;
    }
    else
    {
        int element = arr[top];
        top--;
        return element;
    }
}

int main()
{
    fstream inputFile;
    inputFile.open("graph.txt", ios::in);
    int n;
    // input the number of vertices from the file
    inputFile >> n;
    int adjMatrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            inputFile >> adjMatrix[i][j];
        }
    }
    inputFile.close();
    // DFS Code
    inputFile.open("output.txt", ios::out);
    int visited[n] = {0};
    // cout << char(0 + 65) << " ";
    // inputFile << char(0 + 65) << " ";
    // we are starting from the first node over here
    push(0);
    visited[0] = 1; // we set it as true
    while (!isEmpty())
    {
        int node = pop();
        inputFile << char(65 + node) << " ";
        // now explore other nodes related to this node
        for (int j = 0; j < n; j++)
        {
            if (adjMatrix[node][j] == 1 && visited[j] == 0)
            {
                push(j);
                visited[j] = 1;
                // cout << char(65 + j) << " ";
            }
        }
    }
    return 0;
}