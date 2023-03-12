/*
Algorithm for BFS Traversal of Graph using Adjacency Matrix:

Create a queue q and a boolean array visited of size n to keep track of visited nodes.
Mark the starting node s as visited and enqueue it to q.
Repeat the following steps until the queue is empty:
a. Dequeue a node v from q.
b. Visit the node v and process it as needed.
c. Enqueue all unvisited neighbors of v to q and mark them as visited.
If there are any unvisited nodes, select an unvisited node as the new starting node and repeat steps 2-3.
Exit.
*/

#include <iostream>
#include <fstream>
#include <climits>
#define MAX 10
using namespace std;

int arr[MAX] = {0};
int front = -1, rear = -1;

bool isEmpty()
{
    return front == -1;
}

void enque(int element)
{
    if (front == -1)
    {
        front = 0; // for the first element it should increase
    }
    rear++;
    arr[rear] = element;
}

void del()
{
    if (isEmpty())
    {
        return;
    }
    else
    {
        if (front >= rear)
        {
            front = -1;
            rear = -1;
        } /* Q has only one element, so we reset the queue after deleting it. */
        else
        {
            front++;
        }
    }
}
int peek()
{
    if (isEmpty())
    {
        return INT_MIN;
    }
    return arr[front];
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
    // BFS Code
    int visited[n] = {0};
    cout << char(0 + 65) << " ";
    // we are starting from the first node over here
    enque(0);
    visited[0] = 1; // we set it as true
    while (!isEmpty())
    {
        int node = peek();
        del();
        // now explore other nodes related to this node
        for (int j = 0; j < n; j++)
        {
            if (adjMatrix[node][j] == 1 && visited[j] == 0)
            {
                enque(j);
                visited[j] = 1;
                cout << char(65 + j) << " ";
            }
        }
    }
    return 0;
}