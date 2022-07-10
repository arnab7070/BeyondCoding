/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* new_node = new ListNode(6);
        new_node->next = new ListNode(7);
        list<int> lst;
        while (head!=NULL)
        {
            lst.push_back(head->val);
            head = head->next;
        }
        lst.remove(val);
        for(int x: lst)
        {
           new_node->val = x;
           new_node->next = new ListNode();
        } 
        ListNode* temp = new_node;
        return temp;
    }
};
// @lc code=end

