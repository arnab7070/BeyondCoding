#include<iostream>
#include<algorithm>
#include<queue>
#include<deque>
using namespace std;
int main()
{
    priority_queue<int, vector<int>> max_heap;
    max_heap.push(6);
    //stored in memory
    max_heap.push(8);
    //it's greater so it will be parent
    max_heap.push(7);
    //its greater than 8 but less than 6 so it will be child of 8
    max_heap.push(4);
    //it's the smallest element

    for (int i = 0; i < 4; i++)
    {
        cout<<max_heap.top()<<" ";
        max_heap.pop();
    }
    //Output should be like this -> 8 7 6 4
     cout<<endl;
    //So to convert it into min_heap the following code should be there
    
    priority_queue<int, vector<int>, greater<int>> min_heap;

    min_heap.push(6);
    //it will be child of 4
    min_heap.push(8);
    //it will be child of 7 as it is smaller than 7
    min_heap.push(7);
    //it will be child of 4
    min_heap.push(4);
    //As it's the smallest element so it will be the root node

    for (int i = 0; i < 4; i++)
    {
        cout<<min_heap.top()<<" ";
        min_heap.pop();
    }
    //Output should be like this -> 4 6 7 8
    return 0;
}