//find the median of a running stream

#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
priority_queue<int, vector<int>> max_heap;
priority_queue<int, vector<int>, greater<int>> min_heap;

//insert function
void insert(int x){
    if(max_heap.size()==min_heap.size()){
        //base case: if  heap is already empty
        if(max_heap.size()==0){
            max_heap.push(x);
            return;
        }
        //otherwise
        if(x < max_heap.top()){
            max_heap.push(x);
        }
        else{
            min_heap.push(x);
        }
    }

    else{

        //here 2 cases are possible
        //1. size of max_heap>size of min_heap
        //2. size of min_heap>size of max_heap

        if(max_heap.size()>min_heap.size()){
            if(x>=max_heap.top()){
                min_heap.push(x);
            }
            else{
                int temp = max_heap.top();
                max_heap.pop();
                min_heap.push(temp);
                max_heap.push(x);
            }
        }
        else{
            if(x <= min_heap.top()){
                max_heap.push(x);
            }
            else{
                int temp = min_heap.top();
                min_heap.pop();
                max_heap.push(temp);
                min_heap.push(x);
            }
        }
    }
}

double findMedian(){
    if(max_heap.size()==min_heap.size()){
        return (max_heap.top()+min_heap.top())/2.0;
    }
    else{
        if(max_heap.size()>min_heap.size()){
            return max_heap.top();
        }
        else{
            return min_heap.top();
        }
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int temp;
        cin>>temp;
        insert(temp);
        cout<<findMedian()<<" ";
    }   
    return 0;
}