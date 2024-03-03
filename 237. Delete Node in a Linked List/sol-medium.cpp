class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        auto tmp = next->next;
        node->next = node->next->next;
        delete(tmp);
    }
};
