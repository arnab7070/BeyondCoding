#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    stringstream ss(str);
    vector<int> arr;
    string word;
    while(ss.good()) {
      string substr;
      getline(ss, substr, ','); //get first string delimited by comma
      arr.push_back(stoi(substr));
   }
    int sum;
    cin>>sum;
    int count = 0;
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr.size(); j++){
            if(i==j){
                continue;
            }
            if(arr[i]+arr[j]==sum){
                // cout<<arr[i]<<" "<<arr[j]<<endl;
                count++;
            }
        }
    }
    cout<<count/2<<endl;
    return 0;
}