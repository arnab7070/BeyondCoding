// Write a program in C or C++ to implement Fractional Knapsack algorithm.
// Find an optimal solution to the knapsack instance n = 7, W = 15.
// (p1, p2, ..., p7) = (10, 5, 15, 7, 6, 18, 3)
// and (w1, w2, ..., w7) = (2, 3, 5, 7, 1, 4, 1).
#include <iostream>
#include <algorithm>

using namespace std;
// class for fractional knapsack
class Item
{
public:
    int value;
    int weight;
    double ratio;
};

// making the customized comparator function
bool compare(Item a, Item b)
{
    return a.ratio > b.ratio;
}

double fractionalKnapsack(int W, Item items[], int n)
{
    sort(items, items + n, compare);
    double max_value = 0.0;
    for (int i = 0; i < n; i++)
    {
        if (W == 0)
        {
            return max_value;
        }
        // storing the maximum weight that I put into the knapsack
        int weight = min(W, items[i].weight);
        max_value += weight * items[i].ratio;
        W -= weight;
    }
    return max_value;
}

int main()
{
    int n = 7;
    int W = 15;
    int p[] = {10, 5, 15, 7, 6, 18, 3};
    int w[] = {2, 3, 5, 7, 1, 4, 1};
    // creating an array of type Item
    Item items[n];
    // configuring the items vector
    for (int i = 0; i < n; i++)
    {
        Item item;
        item.value = p[i];
        item.weight = w[i];
        item.ratio = (double)p[i] / w[i];
        items[i] = item;
    }
    double max_value = fractionalKnapsack(W, items, n);
    cout << "Maximum profit that can be obtained = " << max_value << endl;
    return 0;
}
