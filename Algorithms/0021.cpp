    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode *head = new ListNode(0), *res = head;
		while (l1 != NULL && l2 != NULL) {
			if (l1->val <= l2->val) {
				head->next = l1;
				l1 = l1->next;
			}
			else {
				head->next = l2;
				l2 = l2->next;
			}
			head = head->next;
		}
		if (l1 != NULL) 
			head-> next = l1;
		if (l2 != NULL)
			head-> next = l2;

		return res->next;
	}
