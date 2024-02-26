class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
      if(!head || !head->next) return head;
      ListNode* odd = head;
      ListNode* even = head->next;
      ListNode* even_start = head->next;

      while(odd->next->next && even->next->next){
        odd->next = odd->next->next;
        even->next = even->next->next;

        odd = odd->next;
        even = even->next;
      }

      odd->next = even_start;
      return odd;
    }
};
