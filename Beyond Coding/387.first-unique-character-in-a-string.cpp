/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        int ans = -1;
        for(int i = 0; i < s.length(); i++){
            int count = 0;
            for(int j = 0; j < s.length(); j++){
                if(s[i]==s[j]){
                    count++;
                }
            }
            if(count==1){
                ans = i;
                break;
            }
        }
        return ans;
    }
};
// @lc code=end

