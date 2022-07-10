/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        int check = 1;
        if(s.length()>t.length()){
            return false;
        }
        map<char,int> mpt;
        map<char,int> mps;
        for (int i = 0; i < t.length(); i++)
        {
            mps[t[i]]++;
        }
        for(int i = 0; i < s.length(); i++){
            mpt[s[i]]++;
        }
        map<char,int> :: iterator it;
        map<char,int> :: iterator is;
        for(it = mpt.begin(), is = mps.begin(); it != mpt.end(), is != mps.end(); it++, is++){
            if(it->second > is->second || it->first != is->first){
                check = 0;
                break;
            }
        }
        if(check){
            return true;
        }
        return false;    
    }
};
// @lc code=end

