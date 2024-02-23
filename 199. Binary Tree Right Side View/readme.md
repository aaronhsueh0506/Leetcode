## Problem Description

Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

#### Example 1:
> Input: root = [1,2,3,null,5,null,4]
>
> Output: [1,3,4]

> Explanation: From the right side, you can see the nodes 1, 3, and 4.

#### Example 2:
> Input: root = [1,null,3]
>
> Output: [1,3]

> Explanation: From the right side, you can only see the nodes 1 and 3 because there are no left children.

#### Example 3:
> Input: root = []
>
> Output: []

> Explanation: There are no nodes to see from the right side.

## Constraints

- The number of nodes in the tree is in the range `[0, 100]`.
- `-100 <= Node.val <= 100`

## Concept
1. go right first and go left
2. check each level first node
