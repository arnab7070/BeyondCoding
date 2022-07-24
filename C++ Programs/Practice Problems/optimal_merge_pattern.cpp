#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    priority_queue<int , vector<int>, greater<int>> min_heap;

    for(int x: arr){
        min_heap.push(x);
    }
    int ans = 0;
    while(min_heap.size()>1)
    {
        int e1 = min_heap.top();
        min_heap.pop();
        int e2 = min_heap.top();
        min_heap.pop();

        ans += e1 + e2;
        min_heap.push(e1 + e2);
    }
    cout<<ans<<endl;
    
    return 0;
}