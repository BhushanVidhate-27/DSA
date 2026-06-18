// Title: Merge In Between Linked Lists
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/merge-in-between-linked-lists/

            right = right->next;
            j++;
        }
        while(j < b+1) {
        int j=0;
        
        }
            i++;
            left = left->next;
        while(i < a-1) {
        int i=0;
        ListNode* tail = list2;
        ListNode* right = list1;
        ListNode* left = list1;
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        while(tail->next) tail = tail->next;

        left->next = list2;
        tail->next = right;
        return list1;

