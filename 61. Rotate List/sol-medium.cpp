class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;
        int n = 1;
      
        ListNode* cur = head;
        while(cur->next){
          cur = cur->next;
          n++;
        }

        cur->next = head; // becomes a cycle

        int m = n - k%n;
        for(int i=0;i<m;i++) cur = cur->next;
        ListNode* res = cur->next;
        cur->next = nullptr;
        return res;
    }
};
