#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        int max = INT_MIN;
        map<int,int> m;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin>>temp;
            m[temp]++;
        }
        int ans = 1;
        int totalAss = 0;
        for(auto x: m){
            int nor = x.second;
            int nb = ans*x.first - totalAss;

            if(nor>nb){
                ans += ceil(((nor-nb)/(float)x.first));
            }

            totalAss += x.second;
        }

        cout<<ans<<endl;
        
    }
    return 0;
}