/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,int> str;
        map<char,int> ttr;
        if(s.length()!=t.length()){
            return false;
        }
        for(int i = 0; i < s.length(); i++){
            str[i]++;
            ttr[i]++;
        }
        map<char,int> :: iterator st;
        map<char,int> :: iterator tt;
        cout<<str.size()<<" "<<ttr.size();
        if(str.size()!=ttr.size()){
            return false;
        }
        for(st = str.begin(), tt = ttr.begin(); st != str.end(), tt != ttr.end(); st++,tt++){
            if(st->second != tt->second){
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

