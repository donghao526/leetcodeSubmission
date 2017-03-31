ListNode* reverseBetween(ListNode* head, int m, int n) {
    if (m == n) {
        return head;
    }
    ListNode *temp = new ListNode(0), *prev, *tail, *res, *temporary;
    temp->next = head;
    res = temp;
    int i = 0;
    while (temp) {
        temporary = temp->next;
        if (i == m - 1) {
            prev = temp;
            tail = prev->next;
        }
        if (i >= m && i <= n) {
            temp->next = prev->next;
            prev->next = temp;
        }
        if (i == n) {
            tail->next = temporary;
            break;
        }
        temp = temporary;
        i++;
    }
    return res->next;
}