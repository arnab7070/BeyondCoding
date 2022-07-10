/*
 * @lc app=leetcode id=374 lang=cpp
 *
 * [374] Guess Number Higher or Lower
 */

// @lc code=start
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int pick = -2;
        while(pick != 0){
            if(num>n){
                pick = -1;
            }
            else if(num<n){
                pick = 1;
            }
            if(num==n){
                pick = n;
            }
        }
        return pick;
    }
};
// @lc code=end

