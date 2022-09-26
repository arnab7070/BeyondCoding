#include <iostream>
using namespace std;
int totalCourse(int a, int b, int c){
	return a*b*c;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		cout<<totalCourse(a,b,c)<<endl;
	}
	return 0;
}
