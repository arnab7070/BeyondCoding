#include <iostream>
#include <climits>
#include <fstream>
using namespace std;
int adjMatrix[100][100]; // global array declaration
class priority_queue
{
public:
    int n = 0;
    int size = 0;
    pair<int, int> *arr; // created a pointer of integer array
    // Let's make the constructor
    priority_queue(int size)
    {
        this->size = size;
        // dynamically allocate memory
        arr = new pair<int, int>[size];
        // initialize all elements to 0
        for (int i = 0; i < size; i++)
        {
            arr[i].first = INT_MAX; // distance of the node
            arr[i].second = 0;      // node value (index)
        }
    }
    bool isEmpty()
    {
        // if no element is present in the queue
        return n == 0;
    }
    void insert(int distance, int nodeIndex)
    {
        if (n > size)
        {
            cout << "No element can be inserted as queue is full" << endl;
            return;
        }
        n++;                         // increment the size
        int index = n;               // get the last index of the array
        arr[index].first = distance; // just put the newly added distance to the last of the array
        arr[index].second = nodeIndex;
        // Now just try to re-arrange the elements to maintain the heap property
        // as we are doing it on max heap so, always arr[parent] < arr[child]
        int parent_index = index / 2;
        while (arr[parent_index].first > arr[index].first && index > 1)
        {
            // just swap two elements to re-arrange the heap
            swap(arr[parent_index], arr[index]);
            index = parent_index;     // update the current index value for next iteration
            parent_index = index / 2; // update the parent index also
        }
    }
    // Root Node is alaways having the minimum prority
    pair<int, int> extractMin()
    {
        if (size == 0)
        {
            cout << "No Element to Delete" << endl;
            return make_pair(0, 0);
        }
        pair<int, int> min = arr[1];
        // Step 1: Put the Last Index value to First Index
        arr[1] = arr[n];
        // Step 2: Now decrement the size as we are deleting elements
        n--;
        // Step 3: Now place the newly added root to its correct position
        int index = 1; // taking current index as root
        while (index <= n / 2)
        {
            int leftIndex = 2 * index;
            int rightIndex = 2 * index + 1;
            int minIndex = index;
            if (leftIndex <= n && arr[leftIndex].first < arr[minIndex].first)
            {
                minIndex = leftIndex;
            }
            if (rightIndex <= n && arr[rightIndex].first < arr[minIndex].first)
            {
                minIndex = rightIndex;
            }
            if (minIndex != index)
            {
                swap(arr[index], arr[minIndex]);
                index = minIndex;
            }
            else
            {
                break;
            }
        }
        return min;
    }
};

void dijkastraAlgorithm(int *distance, bool *visited, priority_queue &pq, int n, int sourceVertex)
{
    pq.insert(0, sourceVertex); // first insert source node and make distance as 0
    distance[sourceVertex] = 0; // update the distance array for this node is 0
    while (!pq.isEmpty())
    {
        // extracting the minimum node whose distance is minimum
        pair<int, int> curr = pq.extractMin();
        // mark the visited array for this node as true
        if (visited[curr.second] == false)
        {
            visited[curr.second] = true;
            // now just explore all of its connections
            for (int i = 0; i < n; i++)
            {
                // for this condition that means node has a connection or edge
                if (adjMatrix[curr.second][i] != 0)
                {
                    int edgeWeight = adjMatrix[curr.second][i];
                    int source = curr.second;
                    int destination = i;
                    // now perform relaxation technique (This is the main part of the code)
                    if (distance[source] + edgeWeight < distance[destination])
                    {
                        distance[destination] = distance[source] + edgeWeight; // update
                        pq.insert(distance[destination], destination);         // insert into priority queue also
                    }
                }
            }
        }
    }
    // For printing the all pair shortest path distance
    cout << "All pair shortest path for the source " << char('A' + sourceVertex) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "(" << char('A' + sourceVertex) << "," << char('A' + i) << ") -> " << distance[i] << endl;
    }
}
int main()
{
    fstream inputFile;
    inputFile.open("input.txt", ios::in);
    int n; // number of vertices read from the file
    inputFile >> n;
    adjMatrix[n][n]; // created an adjacency matrix to store the data
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            inputFile >> adjMatrix[i][j];
        }
    }
    inputFile.close();
    int distance[n];
    bool visited[n];
    for (int i = 0; i < n; i++)
    {
        distance[i] = INT_MAX; // initially all distance of the nodes is infinity
        visited[i] = 0;        // initially make all nodes as unvisited
    }
    priority_queue pq(n); // created a priority queue of size n
    dijkastraAlgorithm(distance, visited, pq, n, 0);
    return 0;
}