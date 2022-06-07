#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
    priority_queue<int, vector<int>> max_heap;
    int n,k,sum=0,count=0;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int x: arr){
        max_heap.push(x);
    }
    while (!max_heap.empty())
    {
        sum += max_heap.top();
        max_heap.pop();
        count++;

        if(sum>=k){
            break;
        }
    }
    if(sum<k){
        cout<< "-1" << endl;
    }
    else{
        cout << count << endl;
    }
    return 0;
}