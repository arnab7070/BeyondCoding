#include<bits/stdc++.h>
using namespace std;
void sleepDeprived(int x){
	if(x<7){
		cout<<"YES"<<endl;
		return;
	}
	cout<<"NO"<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		sleepDeprived(x);
	}
	return 0;
}
