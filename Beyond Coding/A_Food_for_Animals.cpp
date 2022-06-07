#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        int total_dog = a+c;
        int total_cat = b+c;
        if(total_dog>=x&&total_cat>=y&&(a+b+c)>=(x+y)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}