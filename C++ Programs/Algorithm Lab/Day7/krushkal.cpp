#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;
// Global declaration
int parent[100], n;
class Edges
{
public:
    int source;
    int destination;
    int weight;

    Edges(int source, int destination, int weight)
    {
        this->source = source;
        this->destination = destination;
        this->weight = weight;
    }
};

// custom comparator for sorting the edges weight in ascending order
bool compare(Edges e1, Edges e2)
{
    return e1.weight < e2.weight;
}

// function to implement find function
int find(int x)
{
    // this implementation will help us to reduce time complexity by Path Compression Method.
    if (parent[x] != x)
    {
        parent[x] = find(parent[x]);
    }
    return parent[x];
}

// function to implement union operation
void Union(int X, int Y)
{
    int rootX = find(X);
    int rootY = find(Y);
    if (rootX == rootY)
        return; // as two vertices belonging from same set
    parent[rootY] = rootX;
}

int main()
{
    fstream inputFile;
    inputFile.open("graph.txt", ios::in);
    inputFile >> n;      // it is the number of vertices
    int adjMatrix[n][n]; // creating a adjacency matrix for the graph
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            inputFile >> adjMatrix[i][j];
        }
    }
    // creation of edgeList array where we can get source, destination and weight respectively
    vector<Edges> edgeList;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // we don't want to include those values which has no connection between them
            if (adjMatrix[i][j] != 0)
            {
                int source = i, destination = j, weight = adjMatrix[i][j];
                Edges edge = Edges(source, destination, weight);
                edgeList.push_back(edge);
            }
        }
    }
    parent[n] = {0}; // for initialization of parent array of size n
    // Now for initially set everyone's parent as it's own value
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
    }
    // now sort the edgeList with respect to the weight of edges
    sort(edgeList.begin(), edgeList.end(), compare);
    int edgeCount = 1; // as the name suggests it is the counter variable for edges
    for (int i = 0; edgeCount <= n - 1; i++)
    {
        // now extract current edge
        Edges currEdge = edgeList[i];
        // find the parent or representative for both source and destination
        int rootS = find(currEdge.source);
        int rootD = find(currEdge.destination);
        // if the representatives are not equal that means they are belonging from
        // different set. So in that case make them union and increase the edgeCount
        if (rootS != rootD)
        {
            Union(rootS, rootD); // do union to create a set for these two vertices
            edgeCount++;         // increase the edge count value
            cout << "(" << char('A' + currEdge.source) << "," << char('A' + currEdge.destination) << ") -> " << currEdge.weight << endl;
        }
    }
    return 0;
}