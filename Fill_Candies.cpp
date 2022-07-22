#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int candy,pocket,bag;
        cin>>candy>>pocket>>bag;
        int bag_required = (candy/(pocket*bag))+(candy%(pocket*bag));
        cout<<bag_required<<endl;
    }
    return 0;
}