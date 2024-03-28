Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list **sorted** as well.


#### Example 1:
![Ex](https://assets.leetcode.com/uploads/2021/01/04/linkedlist1.jpg)
```plaintext
Input: head = [1,2,3,3,4,4,5]
Output: [1,2,5]
```
#### Example 2:
![Ex2](https://assets.leetcode.com/uploads/2021/01/04/linkedlist2.jpg)
```plaintext
Input: head = [1,1,1,2,3]
Output: [2,3]
 ```

## Constraints

- The number of nodes in the list is in the range `[0, 300]`.
- `-100 <= Node.val <= 100`
- The list is guaranteed to be **sorted** in ascending order.

## Concept
1. Cur moves to the last node with this value and checks whether pre->next is the same node or not (the same value but not necessarily the same node).
2. If it's a different node, it means there are duplicate nodes. Hence, pre->next should point to cur->next to skip over this value.
