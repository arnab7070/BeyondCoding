#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n,weight;
    cin>>n>>weight;

    //Creating a map
    map<int,int,greater<int>> m;
    for(int i = 0; i < n; i++){
        int value,kg;
        cin>>value>>kg;
        m[value/kg] = kg;
    }
    int max_val = 0;
    map<int,int> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        
        if(weight>=it->second){
            max_val += it->first*it->second;
        }

        if(weight<it->second){
            max_val += weight*(it->first);
            break;
        }
        weight -= it->second;
    }
    cout<<max_val<<endl;
    return 0;
}