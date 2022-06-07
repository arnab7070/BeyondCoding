#include<bits/stdc++.h>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    //always represented as a sorted list
    s.insert(5);
    s.insert(2);
    s.insert(2);//duplicate items are autometically ignored
    s.insert(4);
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
    //multiset -> Duplicate items are possible
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);//duplicate items are autometically ignored
    ms.insert(4);
    for(auto i : ms){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<ms.size()<<endl;
    //ms.erase(2); //all 2 will be deleted
    //if we want to delete only one 2
    ms.erase(ms.find(2));
    for(auto i : ms){
        cout<<i<<" ";
    }
    return 0;
}