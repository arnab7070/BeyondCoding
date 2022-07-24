#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for (int i = 0; i < n; i++) {
	        cin>>arr[i];
	    }
	    map<int,int> mp;
	    for(int x: arr){
	        mp[x]++;
	    }
	    map<int,int> :: iterator it;
	    int ans = 0;
	    for(it = mp.begin(); it != mp.end(); it++){
	        if(it->second==1){
	            ans++;
	        }
	    }
	    if(ans%2==0){
	        ans /= 2;
	    }
	    else{
	        ans = (ans/2) + 1;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
