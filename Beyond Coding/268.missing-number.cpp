/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int starter = 0;
        for(int x: nums){
            if(x!=starter){
                break;
            }
            starter++;
        }
        return starter;
    }
};
// @lc code=end

