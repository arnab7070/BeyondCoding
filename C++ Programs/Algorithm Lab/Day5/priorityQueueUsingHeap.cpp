/*
Write a program in C or C++ to implement minimum priority queue using Heap. And perform the following operation.
a) Get-Minimum() to get the minimum element.
b) Extract-Min()to removes the minimum element from Min Heap.
c) Decrease-Key()to decreases value of key.
d) Insert-Key()to add a new key.
e) Delete-Key()to delete a key.
*/
#include <iostream>
#include <climits>
using namespace std;
#define CAPACITY 100
// we are implementing min-heap
class priority_queue
{
public:
    int arr[CAPACITY];
    int size;
    priority_queue()
    {
        size = 0; // initialize size with 0
    }
    // array will look like arr[1....99] that means this implementation will cause array index
    // starts from 1
    void insert(int element)
    {
        if (size > CAPACITY)
        {
            cout << "No Space Is Left For Insertion" << endl;
            return;
        }
        size++;               // increment the size
        int index = size;     // get the last index of the array
        arr[index] = element; // just put the newly added element to the last of the array
        // Now just try to re-arrange the elements to maintain the heap property
        // as we are doing it on max heap so, always arr[parent] < arr[child]
        int parent_index = index / 2;
        while (arr[parent_index] > arr[index] && index > 1)
        {
            // just swap two elements to re-arrange the heap
            swap(arr[parent_index], arr[index]);
            index = parent_index;     // update the current index value for next iteration
            parent_index = index / 2; // update the parent index also
        }
    }

    void print()
    {
        cout << "Current elements are: ";
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    // Root Node is alaways having the minimum prority
    int extractMin()
    {
        if (size == 0)
        {
            cout << "No Element to Delete" << endl;
            return INT_MAX;
        }
        int min = arr[1];
        // Step 1: Put the Last Index value to First Index
        arr[1] = arr[size];
        // Step 2: Now decrement the size as we are deleting elements
        size--;
        // Step 3: Now place the newly added root to its correct position
        int index = 1; // taking current index as root
        while (index <= size / 2)
        {
            int leftIndex = 2 * index;
            int rightIndex = 2 * index + 1;
            int minIndex = index;
            if (leftIndex <= size && arr[leftIndex] < arr[minIndex])
            {
                minIndex = leftIndex;
            }
            if (rightIndex <= size && arr[rightIndex] < arr[minIndex])
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

    int getMinimum()
    {
        if (size == 0)
        {
            cout << "Priority Queue is Empty" << endl;
            return INT_MIN; // or any other default value
        }
        return arr[1]; // return the root element
    }

    void decreaseKey(int index, int newVal)
    {
        arr[index] = newVal; // updated the value of that array index
        // now just re-arrange the array to maintain heap property
        while (index > 1 && arr[index / 2] > arr[index])
        {
            swap(arr[index / 2], arr[index]);
            index = index / 2;
        }
    }

    void deleteFromHeap(int index)
    {
        if (index > CAPACITY)
        {
            cout << "Delete Key Is Not Possible" << endl;
            return;
        }
        // set the value to be deleted to INT_MIN
        decreaseKey(index, INT_MIN);
        // now just delete the lowest value from heap
        extractMin();
    }
};

int main()
{
    priority_queue pq;
    pq.insert(41);
    pq.insert(14);
    pq.insert(5);
    pq.insert(16);
    pq.insert(27);
    pq.print();
    cout << "Minimum value popped out: " << pq.extractMin() << endl;
    pq.print();
    cout << "Min Val = " << pq.getMinimum() << endl;
    pq.decreaseKey(3, 13);
    pq.print();
    cout << "Min Val = " << pq.getMinimum() << endl;
    pq.deleteFromHeap(3);
    pq.print();
    return 0;
}