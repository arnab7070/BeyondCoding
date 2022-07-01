/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1){
            return 1; //base case
        }
        for (int i = 0; i < (num); i++)
        {
            if(pow(i,2)==num){
                return true;
            }
            if(pow(i,2)>num){
                break;
            }
        }
        return false;
    }
};
// @lc code=end

