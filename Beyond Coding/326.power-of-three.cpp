/*
 * @lc app=leetcode id=326 lang=cpp
 *
 * [326] Power of Three
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfThree(int n) {
        for(int i = 0; i < n; i++){
            if(pow(3,i)==n){
                return true;
            }
            if(pow(3,i)>n){
                break;
            }
        }
        return false;
    }
};
// @lc code=end

