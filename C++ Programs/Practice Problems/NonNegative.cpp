#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0; i < n; i++){
			cin>>arr[i];
		}
		int ans = 1;
		for(int i = 0; i < n; i++){
			ans = ans*arr[i];
		}
		if(ans<0){
			cout<<1<<endl;
		}
		else{
			cout<<0<<endl;
		}
	}
	return 0;
}
