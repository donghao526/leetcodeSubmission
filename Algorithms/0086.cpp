    ListNode* partition(ListNode* head, int x) {
        ListNode *less = new ListNode(0), *greater = new ListNode(0);
        ListNode *lessHeader = less;
        ListNode *greaterHeader = greater;
        
        while (head) {
            if (head->val < x) {
                less->next = head;
                less = head;
            }
            else {
                greater->next = head;
                greater = head;
            }
            head = head->next;
        }
        if (!(lessHeader->next)) {
            return greaterHeader->next;
        }
        if (!(greaterHeader->next)) {
            return lessHeader->next;
        }
        less->next = greaterHeader->next;
        greater->next = NULL;
        return lessHeader->next;
    }