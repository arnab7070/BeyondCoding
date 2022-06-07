#include<iostream>
#include<map>
#include<unordered_map>
//That's the process of hashing
using namespace std;
int main()
{
    map<int, int> m;
    unordered_map<int, int> um;
    //so here first one is key & second one is value that means map<key, value>
    m[8] = 9;
    um[4] = 5;
    m.insert(make_pair(7,2));
    cout<<m[8]<<" "<<m[7]<<" "<<um[4]<<endl;
    return 0;
}