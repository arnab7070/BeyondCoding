#include<bits/stdc++.h>
using namespace std;
int maxEnrollment(int available, int applicants){
	if(available>applicants){
		return 0;
	}
	else{
		return abs(available-applicants);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		cout<<maxEnrollment(a,b)<<endl;
	}
	return 0;
}
