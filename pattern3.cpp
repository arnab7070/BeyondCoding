#include<iostream>
using namespace std;
int main(){

    int a;
    cout<<"Enter Your Desired Number: ";
    cin>>a;

    for (int i = 1; i < a+1; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (j<=i)
            {
                cout<<i<<" ";
            }
            else {

                cout<<" ";
            }
            
        }
        cout<<endl;
    }

    int b;
    cout<<"Enter Your Desired Number: ";
    cin>>b;
    int count=1;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j <= b; j++)
        {
            if (j<=i)
            {
                cout<<count<<" ";
                count++;
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }

return 0;
}