#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int powerOf2(int x){
	int ans = 0;
	for(int i = 0; i < x; i++){
		if(pow(2,i)>x){
			ans = INT_MIN;
			break;
		}
		else if(pow(2,i)==x){
			ans = i;
			break;
		}
	}
	return ans;
}
int main(){
	int testcase;
	do{
		cout<<"Enter the number: ";
		cin>>testcase;
		if(testcase==0){
			cout<<"The number is not a power of 2"<<endl;
		}
		else if(powerOf2(testcase)>=0){
			cout<<"The number is 2 to the power "<<powerOf2(testcase)<<endl;
		}
		else if(powerOf2(testcase)<0){
			cout<<"The number is not a power of 2"<<endl;
		}
	}while(true);
	
	return 0;
}
