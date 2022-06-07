#include<bits/stdc++.h>
using namespace std;
int main(){
   int n; 
   int t;
   cin>>n>>t;
   int arr[n];
   string str;
   cin>>str;
   for(int i = 0; i < str.length(); i++){
       string strPart;
       strPart.push_back(str[i]);
       arr[i] = stoi(strPart);
       strPart.pop_back();
   }
    while(t--){
        int curr;
        cin>>curr;
        int sum = 0;
        for (int j = 0; j < curr; j++)
        {
            int nowVal = arr[curr-1]-arr[j];
            if(nowVal<0){
                nowVal = -nowVal;
            }
            sum = sum + nowVal;
        }
        cout<<sum<<endl;
    }
return 0;
}