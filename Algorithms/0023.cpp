struct cmp{
    bool operator()(ListNode *a, ListNode *b){
        return a->val > b->val;
    }
};

ListNode* mergeKLists(vector<ListNode*>& lists) {
    ListNode * cur = new ListNode(0);
    ListNode * head = cur;
    std::priority_queue<ListNode *, vector<ListNode *>, cmp> heap;
    
    if (lists.empty()) {
        return head->next;
    }
    
    for (int i = 0; i < lists.size(); i++) {
        if (lists[i])
            heap.push(lists[i]);
    }
    
    while (!heap.empty()) {
        ListNode * temp = heap.top();
        heap.pop();
        cur->next = temp;
        cur = cur->next;
        if (temp->next) {
            heap.push(temp->next);
        }
    }
    
    return head->next;
}
