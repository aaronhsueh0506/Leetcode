class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
      ListNode* slow = head;
      ListNode* fast = head;

      while(fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast) break;
      }

      if(!fast->next && !fast->next->next) return NULL; // no cycle

      slow = head;
      while(slow != fast){
        slow = slow->next;
        fast = fast->next;
      }
      return slow;
    }
};
