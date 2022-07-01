/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        long long int temp = 1;
        while(temp<=n){
            temp *= 2;
            if(temp==n){
                return true;
            }
        }
        return false;
    }
};
// @lc code=end

