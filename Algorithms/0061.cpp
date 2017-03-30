    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode * temp = head, *tail;
        ListNode *prev = new ListNode(0), *res;
        prev->next = head; res =  prev;
        if (!head || k == 0) {
            return head;
        }
        int i = 0;
        int length = 0;
        while (temp) {
            tail = temp;
            temp = temp->next;
            length ++;
        }
        int space = k % length;
        if (space == 0) {
            return head;
        }
        
        while (i < space) {
            head = head->next;
            i++;
        }
        while (head != NULL) {
            head = head->next;
            prev = prev->next;
        }
        tail->next = res->next;
        res = prev->next;
        prev->next = NULL;
        return res;
    }