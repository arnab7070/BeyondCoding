/*
 * @lc app=leetcode id=168 lang=cpp
 *
 * [168] Excel Sheet Column Title
 */

// @lc code=start
class Solution {
public:
    char helper(int n){
        return (64+n);
    }
    string convertToTitle(int n) {
        string str;
        while (n>26)
        {
            int temp = n%26;
            if (temp==0)
            {
                temp=26;
                n -= 26;
            }
            
            str += helper(temp);
            n /= 26;
        }
        str += helper(n);
        reverse(str.begin(),str.end());
        return str;
    }
};
// @lc code=end

