    ListNode* removeElements(ListNode* head, int val) {
        ListNode *prev = new ListNode(0), *res;
        prev->next = head;
        res = prev;
        while (head) {
            if (head->val == val) {
                prev->next = head->next;
            }
            else {
                prev = prev->next;
            }
            head = head->next;
        }
        return res->next;
    }