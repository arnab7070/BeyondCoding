#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int teddy[n];
    int cho[n];
    int total_teddy = 0;
    for(int i = 0; i < n; i++){
        cin>>teddy[i];
        total_teddy += teddy[i];
    }
    for(int i = 0; i < n; i++){
        cin>>cho[i];
    }
    int ans = 0;
    if(m==0){
        for (int i = 0; i < n; i++)
        {
            ans = max(ans, cho[i]*teddy[i]);
        }
        cout<<ans<<endl;
        return 0;
    }
    if(total_teddy==m){
        cout<<0<<endl;
    }

    vector<pair<int,int>> mp;
    for(int i = 0; i < n; i++){
        mp.push_back(make_pair(teddy[i],cho[i]));
    }
    sort(mp.begin(),mp.end());
    reverse(mp.begin(),mp.end());
    vector<pair<int,int>> :: iterator it;
    vector<pair<int,int>> :: iterator curr;
    for(it = mp.begin(); it != mp.end(); it++){
        if(m<=0){
            curr = it;
            break;
        }
        m -= it->first;
    }
    for(curr; curr != mp.end(); curr++){
        ans = max(ans, curr->first*curr->second);
    }
    cout<<ans<<endl;
    return 0;
}