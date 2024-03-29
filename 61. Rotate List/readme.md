## Problem Description

Given the head of a linked list, rotate the list to the right by `k` places, where `k` is non-negative.

#### Example 1:
![Example 1](https://assets.leetcode.com/uploads/2020/11/13/rotate1.jpg)
```plaintext
Input: head = [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]
Explanation:
The list rotates 2 places to the right: [1,2,3,4,5] -[4,5,1,2,3]
```

#### Example 2:
![Example 2](https://assets.leetcode.com/uploads/2020/11/13/roate2.jpg)
```plaintext
Input: head = [0,1,2], k = 4
Output: [2,0,1]
Explanation:
The list rotates 4 places to the right: [0,1,2] -[2,0,1]
```
## Constraints

- The number of nodes in the list is in the range `[0, 500]`.
- `-100 <= Node.val <= 100`
- `0 <= k <= 2 * 10^9`

## Note:

Rotate the list to the right by `k` places means that the `k` nodes from the end of the list will be moved to the beginning of the list. If `k` is greater than the length of the list, keep rotating the list until you have rotated `k` times.

## Concept
1. First, we need to determine the length of the linked list, denoted as n.
2. The actual number of rotations required is k % n.
3. Connect the last node to the first node to form a cycle.
4. Move forward n - (k % n) steps; the next node will be the new starting node, and its next pointer should be set to nullptr.
