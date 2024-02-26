## Problem Description

Given the `root` of a binary tree, return *the maximum width of the given tree*.

The **maximum width** of a tree is the maximum width among all levels.

The width of one level is defined as the length between the end-nodes (the leftmost and rightmost non-null nodes), where the null nodes between the end-nodes are also counted into the length calculation.

It is guaranteed that the answer will in the range of a 32-bit signed integer.

#### Example 1:
> Input: root = [1,3,2,5,3,null,9]
>
> Output: 4
>
> Explanation: The maximum width exists in the third level with length 4 (5,3,null,9).

![Example 1](https://assets.leetcode.com/uploads/2021/05/03/width1-tree.jpg)

#### Example 2:
> Input: root = [1,3,null,5,3]
>
> Output: 2
>
> Explanation: The maximum width exists in the second level with length 2 (5,3).

![Example 2](https://assets.leetcode.com/uploads/2021/05/03/width2-tree.jpg)

#### Example 3:
> Input: root = [1,3,2,5]
>
> Output: 2
>
> Explanation: The maximum width exists in the second level with length 2 (3,2).

![Example 3](https://assets.leetcode.com/uploads/2021/05/03/width3-tree.jpg)

## Constraints

- The number of nodes in the tree is in the range `[1, 3000]`.
- `-100 <= Node.val <= 100`

## Concept
1. Find the most right and most left nodes at each level and calculate their difference.
2. Assign numbers to left and right children as 2 * root and 2 * root + 1, respectively. To avoid overflow, use unsigned integers.
3. Record the positions of the leftmost nodes for all levels.
