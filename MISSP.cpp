#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,i;
        cin>>n;
	    int arr[n];
	    bool flag = false;
	    for (int i = 0; i < n; i++) {
	        cin>>arr[i];
	    }
	    sort(arr, arr+n);
	    for (i = 0; i < n; i=i+2){
	        if(arr[i]==arr[i+1]){
                flag = true;
	        }
	        else{
	            flag = false;
	        }
	    }
	    if(flag == false){
	    cout<<arr[n-1];
	    }
	}
	return 0;
}