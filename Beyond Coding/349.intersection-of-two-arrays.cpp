/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1,s2;
        for(int x: nums1){
            s1.insert(x);
        }
        for(int x: nums2){
            s2.insert(x);
        }
        vector<int> arr;
        set<int> :: iterator itr;
        set<int> :: iterator jtr;
        for(itr = s1.begin(); itr != s1.end(); itr++){
            for(jtr = s2.begin(); jtr != s2.end(); jtr++){
                if(*itr==*jtr){
                    arr.push_back(*itr);
                }
            }
        }
        return arr;
    }
};
// @lc code=end

