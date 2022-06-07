#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Enter the number you want upto to add\n";
cin>>n;

int sum=0;
for(int start=1;start<=n;start++){
    sum=sum+start;
}

cout<<"The Total Sum Upto "<<n<<" is "<<sum<<endl;
return 0;
}