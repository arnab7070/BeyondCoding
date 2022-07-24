#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,num;

        cin>>a>>b>>num;

        if(a%b==0){

            cout<<-1<<endl;

        }
        else{

	        int j=num;

	        if(j%a!=0){

	            j=num+a-(num%a);

	        }
	        for(j;!(j%a==0&&j%b!=0);j=j+a);
            
	        cout<<j<<endl;
	    }
    }
    return 0;
}