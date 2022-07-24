/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> m1,m2;
        for(int i = 0; i < ransomNote.length();i++){
            m1[ransomNote[i]]++;
        }
        for(int i = 0; i < magazine.length();i++){
            m2[magazine[i]]++;
        }
        map<char,int> :: iterator it1;
        map<char,int> :: iterator it2;
        it2 = m2.begin();
        int check = 0;
        for(it1 = m1.begin(); it1 != m1.end(); it1++){
            if(it1->first == it2->first){
                if(it1->second >= it2->second){
                    check = 1;
                }
                else{
                    check = 0;
                    break;
                }
            }
            else{
                check = 0;
                break;
            }
            it2++;
        }
        if(check){
            return true;
        }
        return false;
    }
};
// @lc code=end

