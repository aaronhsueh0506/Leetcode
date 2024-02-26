class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
      if(!head || !head->next) return head;
      ListNode* pre = new ListNode(0, head), *cur = pre;
      while(pre->next && pre->next->next){
        ListNode* tmp = pre->next->next;
        pre->next->next = tmp->next;
        tmp->next = pre->next;
        pre->next = t;

        pre = t->next;
      }
      return cur->next;
    }
};
