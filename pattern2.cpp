#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter Your Desired Number: ";
    cin>>n;
     
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i+j<=4){
                cout<<"*";
            }
            else{cout<<" ";
            }
        }
        cout<<"\n";
    }
    
    int k;
    cout<<"Enter Your Desired Number: ";
    cin>>k;
     
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if(i+j>=k)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }

    int m;
    cout<<"Enter Your Desired Number: ";
    cin>>m;
     
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i<=j){
                cout<<"*";
            }
            else{cout<<" ";
            }
        }
        cout<<"\n";
    }

    int z;
    cout<<"Enter Your Desired Number: ";
    cin>>z;
     
    for (int i = 0; i < z; i++)
    {
        for (int j = 0; j < z; j++)
        {
            if(j<=i){
                cout<<"*";
            }
            else{cout<<" ";
            }
        }
        cout<<"\n";
    }
    

return 0;
}