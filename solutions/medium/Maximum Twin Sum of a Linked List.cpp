// Title: Maximum Twin Sum of a Linked List
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/

            curr->next = prev;
            prev = curr;
            next = curr->next;
        while(curr) {
        ListNode* next = NULL;
        ListNode* curr = right;
        ListNode* prev = NULL;
        //reverse ll mid->end
        // now right at mid-1 and temp is exhausted 
