ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode *prev = new ListNode(0), *res;
    prev->next = head; res =  prev;
    int i = 0;
    while (i < n) {
        head = head->next;
        i++;
    }
    while (head != NULL) {
        head = head->next;
        prev = prev->next;
    }
    prev->next = prev->next->next;
    return res->next;
}