/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> arr;
        int count = 0;
        for(int x: nums){
            if(x!=0){
                arr.emplace_back(x);
            }
            if(x==0){
                count++;
            }
        }
        while (count--)
        {
            arr.emplace_back(0);
        }
        for (int i = 0; i < arr.size(); i++)
        {
            nums[i] = arr[i];
        }
        
        
    }
};
// @lc code=end

