#include<bits/stdc++.h>
using namespace std;
vector<int> solve(string A) {
    map<char,int> mp;
    for(int i = 0; i < A.length(); i++){
        mp[A[i]]++;
    }
    map<char, int> :: iterator it;
    vector<int> arr;
    for(it = mp.begin(); it != mp.end(); it++){
        // auto temp = it++;
        // if(temp->first - it->first == 1){
            auto temp = it;
            auto lemp = temp->first;
            auto temp2 = temp++;
            auto gemp = temp2->first;
            cout<<gemp-lemp<<endl;

            arr.push_back(it->second);
        // }
        // else{
        //     int temp1 = temp->first - it->first;
        //     while(temp1--){
        //         arr.push_back(0);
        //     }
        // }
    }
    return arr;
}


int main()
{
    string str = "interviewbitscaler";
    for(int x: solve(str)){
        cout<<x<<" ";
    }
    return 0;
}