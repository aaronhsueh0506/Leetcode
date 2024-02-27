## Problem Description

Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return `null`.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the `next` pointer. Internally, `pos` is used to denote the index of the node that the tail's `next` pointer is connected to (**Note:** `pos` is not passed as a parameter).

**Do not modify** the linked list.

#### Example 1:
```plaintext
Input: head = [3,2,0,-4], pos = 1
Output: tail connects to node index 1
Explanation: There is a cycle in the linked list, where the tail connects to the second node.
```
![Example 1](https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist.png)

#### Example 2:
```plaintext
Input: head = [1,2], pos = 0
Output: tail connects to node index 0
Explanation: There is a cycle in the linked list, where the tail connects to the first node.
```
![Example 2](https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test2.png)

#### Example 3:
```plaintext
Input: head = [1], pos = -1
Output: no cycle
Explanation: There is no cycle in the linked list.
```
![Example 3](https://assets.leetcode.com/uploads/2018/12/07/circularlinkedlist_test3.png)

## Constraints

- The number of the nodes in the list is in the range `[0, 10^4]`.
- `-10^5 <= Node.val <= 10^5`
- `pos` is `-1` or a valid index in the linked list.

## Follow-Up
Can you solve it using `O(1)` (i.e., constant) memory?

## Concept
1. Use Floyd's cycle detection algorithm.
2. First, check whether a cycle exists.
3. Reset either slow or fast pointer to the head. The node where they meet is the start of the cycle.
