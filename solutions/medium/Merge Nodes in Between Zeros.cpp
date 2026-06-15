// Title: Merge Nodes in Between Zeros
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/merge-nodes-in-between-zeros/

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* newHead = head->next;
        ListNode* left = newHead;
        ListNode* right = newHead;
        while(right && right->next) {
        int sum = newHead->val;
            right = right->next;
            if(right->val == 0) {
                left->next = right->next;
                left->val = sum;
                left = right->next;
                sum = 0;
            }else {
                sum += right->val;
            }
