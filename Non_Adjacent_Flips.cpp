#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int num = stoi(str);
        if(num==0){
            cout<<"0"<<endl;
        }
        vector<int> arr;
        while(num>0){
            int temp = num%10;
            arr.push_back(temp);
            num = num/10;
        }
        reverse(arr.begin(), arr.end());
        int count = 0;
        vector<int> pos;
        for(int i = 0; i < n; i++){
            if(arr[i]==1){
                pos.push_back(i);
            }
        }
        
    }
    return 0;
}