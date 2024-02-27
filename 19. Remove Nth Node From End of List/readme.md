## Problem Description

Given the head of a linked list, remove the nth node from the end of the list and return its head.

#### Example 1:
```plaintext
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]

Explanation: The second node from the end, node 4, is removed.
```
#### Example 2:
```plaintext
Input: head = [1], n = 1
Output: []

Explanation: The only node is removed, leaving the list empty.
```
#### Example 3:
```plaintext
Input: head = [1,2], n = 1
Output: [1]

Explanation: The last node is removed, leaving the first node.
```
## Constraints

- The number of nodes in the list is `sz`.
- `1 <= sz <= 30`
- `0 <= Node.val <= 100`
- `1 <= n <= sz`

## Follow-up

Could you do this in one pass?

## Concepts
1. Count the number of nodes in the linked list to identify which node needs to be removed.
2. If the number of iterations is greater than n, start tracking the node to be removed.
3. If the node to be removed is the first node, return the next node.
