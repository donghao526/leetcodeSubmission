    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int cf = 0;
        ListNode *head = new ListNode(0), *res = head;
        while (l1 != NULL || l2 != NULL || cf) {
            head->next = new ListNode(((l1 == NULL ? 0 : l1->val) + (l2 == NULL ? 0 : l2->val) + cf) % 10);
            cf = ((l1 == NULL ? 0 : l1->val) + (l2 == NULL ? 0 : l2->val) + cf) / 10;
            l1 = (l1 != NULL ? l1->next : l1);
            l2 = (l2 != NULL ? l2->next : l2);
            head = head->next;
        }
        return res->next;
    }