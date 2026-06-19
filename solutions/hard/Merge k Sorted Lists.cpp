// Title: Merge k Sorted Lists
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/merge-k-sorted-lists/

            }else {
                temp->next = b;
            }
        }
                a = a->next;
                b = b->next;
                temp->next = a;
            if(a->val < b->val) {
            temp = temp->next;
        while(a && b) {
        if(a) temp->next = a;
        if(b) temp->next = b;
        ListNode* b = lists[j]; // next list idx 
        ListNode* a = i; // newHead
        ListNode* temp = dummy;
        ListNode* dummy = new ListNode(0);
    ListNode* mergeList(ListNode* i, int j, vector<ListNode*>& lists) {
