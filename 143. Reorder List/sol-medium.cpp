class Solution {
public:
    void reorderList(ListNode* head) {
      ListNode* slow = head;
      ListNode* fast = head->next;

      while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
      }

      ListNode* mid = slow->next;
      slow->next = nullptr;

      ListNode* cur = mid, *pre = nullptr;
      while(cur){ // reverse
        ListNode* t = cur->next;
        cur->next = pre;
        pre = cur;
        cur = t;
      }

      while(pre && head){
        ListNode* h = head->next;
        head->next = pre; // h to p
        pre = pre->next; // push p
        head->next->next = h; // p to h
        head = h; // push h
      }
    }
};
