    void deleteNode(ListNode* node) {
        *node = *node->next;
    }