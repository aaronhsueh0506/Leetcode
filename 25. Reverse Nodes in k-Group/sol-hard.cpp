class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* pre = dummy;
        ListNode* cur = head;
        
        int i=1;
        while(cur){
            if(i%k==0){
                pre = reverseingroup(pre, cur->next);
                cur = pre->next;
            }
            else cur = cur->next;
            i++;
        }
        return dummy->next;
    }

    ListNode* reverseingroup(ListNode* pre, ListNode* next){
        ListNode* last = pre->next, *cur = last->next;
        while(cur != next){
            last->next = cur->next; // first of pair pointer to next
            cur->next = pre->next; // second of pair pointer to first one
            pre->next = cur; // -1 pointer to cur(second of pair)

            cur = last->next; 
        }
        return last; // return first one element node
    }
};
/*
pre(-1) -> last(0) -> cur(1) -> (2) -> next

last(0) -> (2), cur(1) -> last(0), pre(-1) -> cur(1)
pre(-1) -> cur(1) -> last(0) -> (2) -> next

pre -> (1) -> last(0) -> cur(2) -> next
last(0) -> null, cur(2)->(1), pre(-1)->2
pre -> cur(2) -> (1) -> last(0) -> cur(next)

finally:
pre -> (.....) -> last -> (cur==next)
*/
