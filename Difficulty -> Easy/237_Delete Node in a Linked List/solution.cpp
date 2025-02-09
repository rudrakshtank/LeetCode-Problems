class Solution {
public:
    void deleteNode(ListNode* node) {
        if (node == NULL || node->next == NULL) return;
        ListNode* temp= node->next;
        node->val = temp->val;
        node->next=temp->next;
    }
};
