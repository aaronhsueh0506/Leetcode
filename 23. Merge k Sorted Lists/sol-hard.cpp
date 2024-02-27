class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
      if(lists.empty()) return nullptr;
      int n = lists.size();

      while(n>1){
        int k = (n+1)/2; // groups number after merge
        for(int i=0; i<n/2; i++){
          lists[i] = merge(lists[i], lists[i+k]);
        }
        n = k;
      }
      return lists[0];
    }

    ListNode* merge(ListNode* l1, ListNode* l2){
      ListNode* dummy = new ListNode(0);
      ListNode* cur = dummy;

      while(l1 && l2){
        if(l1->val < l2->val){
          cur->next = l1;
          l1 = l1->next;
        }
        else{
          cur->next = l2;
          l2 = l2->next;
        }
        cur = cur->next;
      }

      if(l1) cur->next = l1;
      if(l2) cur->next = l2;
      return dummy->next;
    }
};
