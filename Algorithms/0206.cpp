    ListNode* reverseList(ListNode* head) {
        ListNode *prev = new ListNode(0), *res, *temp;
        res = prev;
        while(head) {
            temp = head->next;
            head->next = prev->next;
            prev->next = head;
            head = temp;    
        }
        return res->next;
    }