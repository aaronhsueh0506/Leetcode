## Problem Description

Given the root of a binary tree and an integer `targetSum`, return *the number of paths where the sum of the values along the path equals `targetSum`*.

The path does not need to start or end at the root or a leaf, but it must go downwards (i.e., traveling only from parent nodes to child nodes).

#### Example 1:
> Input: root = [10,5,-3,3,2,null,11,3,-2,null,1], targetSum = 8
>
> Output: 3
>
> Explanation: The paths that sum to 8 are: 1. 5 -> 3
>
> 2. 5 -> 2 -> 1
>
> 3. -3 -> 11

![Example 1](https://assets.leetcode.com/uploads/2021/04/09/pathsum3-1-tree.jpg)

#### Example 2:
> Input: root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22
>
> Output: 3


## Constraints

- The number of nodes in the tree is in the range `[0, 1000]`.
- `-10^9 <= Node.val <= 10^9`
- `-1000 <= targetSum <= 1000`

## Concept
1. Use DFS to traverse.
2. Add the root's value. If it equals the target, it means an answer is found from the start to this node.
3. Push the node to the output and subtract it from the start. If it equals the target, it means the path from this start node to this end node is an answer.
4. Then go left and right, and pop the node.
