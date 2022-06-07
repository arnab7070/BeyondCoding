#include<bits/stdc++.h>
#include <unordered_set>
using namespace std;
int main()
{
    //doesn't represented as a sorted list
    unordered_set<int> s;
    s.insert(5);
    s.insert(2);
    s.insert(7);
    s.insert(7);//duplicate items are autometically ignored
    s.insert(4);
    s.insert(1);
    for(auto i : s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    s.erase(2);
    for(auto i : s){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}