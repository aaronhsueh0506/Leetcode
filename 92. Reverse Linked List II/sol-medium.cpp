/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int count = 1;
        ListNode* dummy = new ListNode(-1, head);
        ListNode* pre = dummy;
        for(int i=1; i<left; i++) pre = pre->next;

        ListNode* cur = pre->next;

        for(int i=left; i<right; i++){
            ListNode* t = cur->next;
            cur->next = t->next;
            t->next = pre->next;
            pre->next = t;
        }
        return dummy->next;
    }
};
