#include<bits/stdc++.h>
using namespace std;

void maxSubarray(vector<int> arr, int k){
    //Algorithm for only first K elements
    deque<int> Q(k); // Creating the K size Sliding Window
    int i;
    for (i = 0; i < k; i++)
    {
        while(not Q.empty() and arr[i] > arr[Q.back()]){
            Q.pop_back();
        }
        Q.push_back(i);
    }
    //Algorithm for remaining part of the vector/array
    for( ;i<=arr.size();i++){
        cout << arr[Q.front()] << " ";
        while(not Q.empty() and Q.front() <= i-k){
            Q.pop_front();
        }
        while(not Q.empty() and arr[i] >= arr[Q.back()]){
            Q.pop_back();
        }

        Q.push_back(i);
    }
    
    
}

int main()
{
    vector<int> arr{1,2,3,1,4,5,2,3,6};
    int k = 3;
    maxSubarray(arr,k);
    return 0;
}