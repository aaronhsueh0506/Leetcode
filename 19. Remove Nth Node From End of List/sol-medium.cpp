class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      if(!head->next) return nullptr; // 1 <= n

      int count = 1;
      ListNode *cur = head;
      ListNode *remove = head;

      while(cur->next){
        cur = cur->next;
        if(count>n) remove = remove->next;
        count++;
      }
      if(n==count) return head->next;
      remove->next = remove->next->next;
      return head;
    }
};

// 1->2->3->4->5
// 1  2  3  4  5
// 1  2  3
