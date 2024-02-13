class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* cur = new ListNode(0, l1);

        while(true){
          cur->next->val += l2->val;
          if(cur->next->val>=10){
            cur->next->val %= 10;

            if(!cur->next->next) cur->next->next = new ListNode(0);
            cur->next->next->val += 1;
          }

          if(!cur->next->next && !l2->next) break;
          else if(!cur->next->next && l2->next){
            cur->next->next = l2->next;
            break;
          }
          else if(cur->next->next && !l2->next){
            l2->next = new ListNode(0, NULL);
          }
          cur->next = cur->next->next;
          l2 = l2->next;
        }
      
        return l1;
    }
};
