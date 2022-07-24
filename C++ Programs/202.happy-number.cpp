/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    int squareSum(int n){
        int temp = 0;
        while(n>0){
            int l = n%10;
            temp += pow(l,2);
            n /= 10;
        }
        return temp;
    }
    bool isHappy(int n) {
        while(n <= INT_MAX){
            if(n==1){
                return true;
            }
            if(n==89){
                return false;
            }
            n = squareSum(n);
        }
        return false;
    }
};
// @lc code=end

