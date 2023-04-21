#include <iostream>
#include <fstream>
using namespace std;
int n; // number of vertex
// structure for edge

struct Edge
{
    int v1;
    int v2;
    int weight;
};

struct Edge edge[100]; // array of Edge structure
int edgeCount = 0;

void readGraph()
{
    fstream input;
    input.open("graph.txt", ios::in);
    input >> n; // input the total number of vertex
    // input of graph by adjacency matrix method
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int number;
            input >> number;
            if (number != 0)
            {
                edge[edgeCount].v1 = i;            // source
                edge[edgeCount].v2 = j;            // destination
                edge[edgeCount++].weight = number; // weight
            }
        }
    }
    input.close();
}

// bubble sort algorithm for sorting according to the weight of the edge
void BubbleSort()
{
    for (int i = 0; i < edgeCount - 1; i++)
    {
        for (int j = 0; j < edgeCount - i - 1; j++)
        {
            int weight1 = edge[j].weight;
            int weight2 = edge[j + 1].weight;
            if (weight1 > weight2)
            {
                swap(edge[j], edge[j + 1]);
            }
        }
    }
}

int parent[100]; // parent array
int mst[100][3]; // array for storing details about minimum spanning tree
int mstE = 0;    // no. of edge in minimum spanning tree
// make set function for kruskal algorithm
void MakeSet()
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
    }
}
// find algorithm to find out the parent of a node
int find(int i)
{
    while (parent[i] > 0)
    {
        i = parent[i];
    }
    return i;
}
// Union operation required for kruskal algorithm
void Union(int i, int j)
{
    int u = find(i);
    int v = find(j);
    parent[u] = v;
}
// main Kruskal Algorithm
void KruskalAlgorithm()
{
    BubbleSort();
    MakeSet();
    for (int i = 0; i < edgeCount; i++)
    {
        if (find(edge[i].v1) != find(edge[i].v2))
        {
            Union(edge[i].v1, edge[i].v2);
            mst[mstE][0] = edge[i].v1;
            mst[mstE][1] = edge[i].v2;
            mst[mstE][2] = edge[i].weight;
            mstE++;
        }
    }
}
// utility function to get the result for MST
void showMst()
{
    int totalCost = 0; // for calculating the minimum path cost
    for (int i = 0; i < mstE; i++)
    {
        totalCost += mst[i][2];
        cout << "(" << char('A' + mst[i][0]) << "," << char('A' + mst[i][1]) << ") -> " << mst[i][2] << endl;
    }
    cout << "Total Cost of the Spanning Tree is = " << totalCost << endl;
}

int main()
{
    readGraph();
    KruskalAlgorithm();
    showMst();
    return 0;
}