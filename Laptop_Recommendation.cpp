#include<iostream>
#include<climits>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int max = INT_MIN;
        int count = 1;
        set<int> s;
        vector<int> l;
        for(int i = 0; i < n-1; i++){
            if(arr[i]==arr[i+1]){
                count++;
            }
            else
                s.insert(count);
                l.push_back(count);
                count = 0; 
            }
        }
        int r = n/2;
        if(count>=(r+1)){
            cout<<max<<endl;
        }
        else{
            cout<<"CONFUSED"<<endl;
        }
    }
    return 0;
}