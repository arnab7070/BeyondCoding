#include<iostream>
#include<vector>
using namespace std;
int main(){
   int k;
   cin>>k;
   vector<int> arr;
   arr = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
   int zerocnt = 0;
   int i = 0;
   int ans = 0;
   for(int j = 0; j < arr.size(); j++){
       if(arr[j]==0){
           zerocnt++;
       }
       while(zerocnt>k){
           if(arr[i]==0){
               zerocnt--;
           }
            i++;
       }
       ans = max(ans,j-i+1);
   }
    cout<<ans<<endl;
return 0;
}