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
    ListNode* partition(ListNode* head, int x) {
        ListNode *less = new ListNode(-1);
        ListNode *great = new ListNode(-1);
        ListNode *lessptr = less, *greatptr = great;

        while(head){
            if(head->val < x) {
                less->next = head;
                less = less->next;
            }
            else {
                great->next = head;
                great = great->next;
            }
            head = head->next;
        }
        great->next = nullptr;
        less->next = greatptr->next;
        return lessptr->next;
    }
};
