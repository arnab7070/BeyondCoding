/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i = 0; i < n; i++){
            if(pow(4,i)==n){
                return true;
            }
            if(pow(4,i)>n){
                break;
            }
        }
        return false;
    }
};
// @lc code=end

