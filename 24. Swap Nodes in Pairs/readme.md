## Problem Description

Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed).

#### Example 1:
```plaintext\n
Input: head = [1,2,3,4]
Output: [2,1,4,3]
```
![Example 1](https://assets.leetcode.com/uploads/2020/10/03/swap_ex1.jpg)

#### Example 2:
```plaintext\n
Input: head = []
Output: []
```
#### Example 3:
```plaintext\n
Input: head = [1]
Output: [1]
```
## Constraints

- The number of nodes in the list is in the range `[0, 100]`.
- `0 <= Node.val <= 100`

## Concept
1. handle linked list length less or equal to 1
2. swap flow:
     - create a temp pointers to 2
     - p->next->next = t->next (1 pointer to 3, 0->1->3, 2)
     - t->next = p->next (2 pointer to 1, 0->1->3, 2->1)
     - p->next = t (0 pointer to 2, 0->2->1->3)
     - p = t->next (p to next p (1), p->3->4...)
       
