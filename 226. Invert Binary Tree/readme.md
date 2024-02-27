## Problem Description

Given the root of a binary tree, invert the tree, and return its root.

#### Example 1:
```plaintext\n
Input: root = [4,2,7,1,3,6,9]
Output: [4,7,2,9,6,3,1]

Explanation: The binary tree is inverted as shown in the diagram.
```
![Invert Binary Tree Example 1](https://assets.leetcode.com/uploads/2021/03/14/invert1-tree.jpg)

#### Example 2:
```plaintext\n
Input: root = [2,1,3]
Output: [2,3,1]

Explanation: The binary tree is inverted as shown in the diagram.
```
![Invert Binary Tree Example 2](https://assets.leetcode.com/uploads/2021/03/14/invert2-tree.jpg)

#### Example 3:
```plaintext\n
Input: root = []
Output: []

Explanation: An empty tree remains empty after inversion.
```
## Constraints

- The number of nodes in the tree is in the range `[0, 100]`.
- `-100 <= Node.val <= 100`

## Notes

- A binary tree can be inverted by swapping the left and right children of all nodes.

## Concept
1. recursive convert left and right subtree
