#include<iostream>
#include<algorithm>
#include<map>
//Testcase: 1 2 2 2 3 4 ans = 2->3 1->1
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    map<int,int, greater<int>> m;
    int count = 1;
    for(int i = 0; i < n-1; i++){
        if(count==k+1){
            break;
        }
        if(arr[i]==arr[i+1]){
            m[arr[i]]++;
        }
        else{
            m[arr[i]]++;
            count++;
        }
    }
    map<int,int> :: iterator it;
    for(it =m.begin(); it != m.end(); it++){
        cout<<it->first<<"->"<<it->second<<endl;
    }
    return 0;
}