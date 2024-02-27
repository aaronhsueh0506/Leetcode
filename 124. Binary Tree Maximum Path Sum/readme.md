## Problem Description

Given a **non-empty** binary tree, find the maximum path sum.

For this problem, a path is defined as any sequence of nodes from some starting node to any node in the tree along the parent-child connections. The path must contain **at least one node** and does not need to go through the root.

#### Example 1:

> Input:[1,2,3]
> 
> Output:6

> Explanation:The maximum path sum is `6`.

#### Example 2:

> Input:[-10,9,20,null,null,15,7]
> 
> Output:42

> Explanation:The maximum path sum is `42`.

## Constraints:

- The number of nodes in the tree is in the range `[0, 3 * 10^4]`.
- `-1000 <= Node.val <= 1000`

## Concept
1. Only one path yields the maximum result.
2. The variable res records the maximum sum for each subtree.
3. For recursion, return the greater of the left or right subtree's maximum sum, including the root, i.e., either left + root or right + root.
