#include <iostream>
#include <fstream>
using namespace std;
// Make adjacency list from an adjacency matrix
class Node
{
public:
    char data;
    Node *next;

    // Constructor
    Node(char data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtEnd(Node *&head, char data)
{
    if (head == NULL)
    {
        head = new Node(data);
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new Node(data);
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
    // Make an array of Node* type
    Node *adjList[n];
    int totalDegree = 0;
    // Creation of adjacency list
    for (int i = 0; i < n; i++)
    {
        adjList[i] = NULL;
        insertAtEnd(adjList[i], i);
        for (int j = 0; j < n; j++)
        {
            if (adjMatrix[i][j] == 1)
            {
                insertAtEnd(adjList[i], j);
                totalDegree++;
            }
        }
    }
    // Now open the output file to store the result
    inputFile.open("output.txt", ios::out);
    inputFile << "Total degree for the given Graph is = " << totalDegree << endl;
    inputFile << "Total edges for the given Graph is = " << totalDegree / 2 << endl;

    // Print the adjacency list
    for (int i = 0; i < n; i++)
    {
        Node *temp = adjList[i];
        // cout << char(i + 'A') << ": ";
        inputFile << char(i + 'A') << ": ";
        temp = temp->next;
        while (temp != NULL)
        {
            // cout << char(temp->data + 'A') << ", ";
            inputFile << char(temp->data + 'A') << ", ";
            temp = temp->next;
        }
        // cout << "NULL" << endl;
        inputFile << "NULL" << endl;
    }
    // it's important to close the file after all of its operation has been done
    inputFile.close();
    return 0;
}