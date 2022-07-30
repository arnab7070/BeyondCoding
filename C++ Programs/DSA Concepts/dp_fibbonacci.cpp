#include<bits/stdc++.h>
using namespace std;
long long int dp[5000];

long long int fib(int n){
    if(n==0 || n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    if (dp[n]!=-1){
        return dp[n];
    }
    dp[n] = fib(n-1) + fib(n-2);
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < 5000; i++){
        dp[i]=-1;
    }
    cout<<fib(n)<<endl;
    return 0;
}