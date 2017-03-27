ListNode* swapPairs(ListNode* head) {
    ListNode *temp = new ListNode(0);
    temp->next = head;
    ListNode *prev = temp, *p = head;
    
    while (p && p->next) {
        ListNode *q = p->next;
        ListNode *r = p->next->next;
        prev->next = q;
        q->next = p;
        p->next = r;
        prev = p;
        p = r;
    }
    return temp->next;
}