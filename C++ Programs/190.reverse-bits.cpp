/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */

// @lc code=start
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string str = to_string(n);
        reverse(str.begin(),str.end());
        cout<<str<<endl;
        return n;
    }
};
// @lc code=end

