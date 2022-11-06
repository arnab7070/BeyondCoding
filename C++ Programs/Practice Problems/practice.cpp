// #include<iostream>
// #include<set>
// #include<vector>
// using namespace std;
// void removeDuplicate(vector<int> arr){
//     set<int> s;
//     for(int x: arr){
//         s.insert(x);
//     }
//     arr.clear();
//     for(int x: s){
//         arr.emplace_back(x);
//     }
//     cout<<"After removing the duplicates: ";
//     for(int x: arr){
//         cout<<x<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     removeDuplicate(arr);
    
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> arr{{1,2,3},{4,5,6}};
    for(int i = 0; i < arr.size(); i++){
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        
    }
    return 0;
}