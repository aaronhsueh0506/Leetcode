## Problem Decsription

Given a linked list, reverse the nodes of a linked list `k` at a time and return its modified list.

`k` is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of `k` then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

#### Example 1:

![Example 1](https://assets.leetcode.com/uploads/2020/10/03/reverse_ex1.jpg)
```plaintext
Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]
```

#### Example 2:

![Example 2](https://assets.leetcode.com/uploads/2020/10/03/reverse_ex2.jpg)
```plaintext
Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5]
```

## Constraints

- The number of nodes in the list is in the range `[1, 5000]`.
- `0 <= Node.val <= 1000`
- `1 <= k <= the length of the linked list`

## Concept
1. While counting to `k`, call the reverse function once.
2. The reverse function requires a `pre` node and a `next` node of the list to be reversed. Every time, move the `cur` node to the first position.
