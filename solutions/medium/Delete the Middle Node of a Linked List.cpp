// Title: Delete the Middle Node of a Linked List
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/

        if(!head->next) {
            return NULL;
        }
        ListNode* prev = NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next) {
            prev = slow;
            fast = fast->next->next;
            slow = slow->next;
        }
        prev->next = slow->next;
        return head;

    }
