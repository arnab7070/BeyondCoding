/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        list<int> lst;
        while(temp!=NULL){
            lst.push_back(temp->val);
            temp = temp->next;
        }
        lst.reverse();
        ListNode* root = head;
        for(auto x: lst){
            head->val = x;
            head = head->next;
        }
        return root;
    }
};
// @lc code=end

