#include<iostream>
using namespace std;
int recursiveFactorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*recursiveFactorial(n-1);
}
int tailRecursion(int a, int n){
    if(n==0 || n==1){
        return a;
    }
    return tailRecursion(a*n,n-1);
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"By normal recursion: "<<recursiveFactorial(n)<<endl;
    cout<<"By tail recursion: "<<tailRecursion(1,n)<<endl;
    return 0;
}