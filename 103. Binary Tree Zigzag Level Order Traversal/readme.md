## Problem Description

Given the `root` of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).

#### Example 1:
> Input: root = [3,9,20,null,null,15,7]
>
> Output: [[3],[20,9],[15,7]]

![Example 1](https://assets.leetcode.com/uploads/2021/02/19/tree1.jpg)

#### Example 2:
> Input: root = [1]
>
> Output: [[1]]

#### Example 3:
> Input: root = []
>
> Output: []

## Constraints

- The number of nodes in the tree is in the range `[0, 2000]`.
- `-100 <= Node.val <= 100`

## Concept
1. Traverse with level tracking.
2. If level % 2 == 1, insert root->val at the beginning of res[level]. Otherwise, append it using res[level].push_back.
3. Proceed to the left and right children.
