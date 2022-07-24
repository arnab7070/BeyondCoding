/*
******************************SMALL FACTORIALS******************************
//Input
An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1<=n<=100

//Output
For each integer n given at input, display a line with the value of n!

//Example

//Sample input://
4
1
2
5
3
//Sample output://
1
2
120
6
*/

#include <iostream>
using namespace std;
double fact(int n){
    if(n<=100 && n>=1){
    double factorial = 1;
    for (int i = 2; i<=n; i++)
    {
        factorial*=i;
    }
    return factorial;
    }
    else
    {
        return 0;
    }
}
int main() {
	int n,current;
	cin>>n;
	double arr[n];
	if(n<=100 && n>=1){
	for(int i = 0; i < n; i++){
	    cin>>arr[i];
	}
	}
	else
	{
	    return 0;
	}
	for(int i = 0; i < n; i++){
	    current  = arr[i];
	    cout<<fact(current)<<endl;
	    }
	return 0;
}