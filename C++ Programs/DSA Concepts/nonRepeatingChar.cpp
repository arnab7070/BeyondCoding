#include<bits/stdc++.h>
using namespace std;
string nonRepeatingCharacter(string A) {
    unordered_map<char, int> mp;
    queue<char> q;
    string ans;
    for (auto c : A)
    {
        mp[c]++;
        q.push(c);
        while (!q.empty() && mp[q.front()] > 1){
            q.pop();
        }   
        if (!q.empty()){
            ans.push_back(q.front());
        }                         
        else{
            ans+="-1";
        }                                    
    }
    return ans;
}
int main()
{
    cout<<nonRepeatingCharacter("aaabbcdaabbc");
    return 0;
}