#include<iostream>
#include<cmath> 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x;
        cin>>x;
        for (int i = 0; i <= pow(2,31); i++)
        {
            
            if ((x&i)>0 && (x^i)>0)
            {
                cout<<i<<endl;
                break;
            }
            
        }
    }
    
    return 0;
}