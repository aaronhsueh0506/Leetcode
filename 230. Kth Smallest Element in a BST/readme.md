## Problem Description

Given the `root` of a binary search tree, and an integer `k`, return *the `kth` smallest value (**1-indexed**) of all the values of the nodes in the tree*.

#### Example 1:
```plaintext\n
Input: root = [3,1,4,null,2], k = 1
Output: 1
```
![Example 1](https://assets.leetcode.com/uploads/2021/01/28/kthtree1.jpg)

#### Example 2:
```plaintext\n
Input: root = [5,3,6,2,4,null,null,1], k = 3
Output: 3
```
![Example 2](https://assets.leetcode.com/uploads/2021/01/28/kthtree2.jpg)

## Constraints

- The number of nodes in the tree is `n`.
- `1 <= k <= n <= 10^4`
- `0 <= Node.val <= 10^4`

## Follow-Up

What if the BST is modified (insert/delete operations) often and you need to find the `kth` smallest frequently? How would you optimize the `kth` smallest query?

## Concept
1. In a BST, the left child is always less than the root.
2. Traverse to the leftmost leaf and decrement k, then decrement k by 1 for the root as well, before traversing the right subtree.
