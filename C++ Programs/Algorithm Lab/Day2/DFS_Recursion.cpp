#include <iostream>
#include <fstream>
#include <climits>
#define MAX 10
using namespace std;

int arr[MAX] = {0};
int top = -1;

// Global Array for storing the Graph
int adjMatrix[MAX][MAX];
int n = 0;

fstream inputFile;
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

void dfsUsingRecursion(int i, int *visited, int (*adjMatrix)[MAX])
{
    // cout << char(i + 'A') << " ";
    inputFile << char(i + 'A') << " ";
    visited[i] = 1;
    for (int j = 0; j < 7; j++)
    {
        if (adjMatrix[i][j] == 1 && !visited[j])
        {
            dfsUsingRecursion(j, visited, adjMatrix);
        }
    }
}

int main()
{

    inputFile.open("graph.txt", ios::in);
    // input the number of vertices from the file
    inputFile >> n;
    adjMatrix[n][n];
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
    dfsUsingRecursion(0, visited, adjMatrix);
    return 0;
}