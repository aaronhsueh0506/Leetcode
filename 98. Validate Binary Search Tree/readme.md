## Problem Description

Given the root of a binary tree, determine if it is a valid binary search tree (BST).

A valid BST is defined as follows:
- The left subtree of a node contains only nodes with keys **less than** the node's key.
- The right subtree of a node contains only nodes with keys **greater than** the node's key.
- Both the left and right subtrees must also be binary search trees.

#### Example 1:
> Input: root = [2,1,3]
>
> Output: true

> Explanation: The binary tree is a valid binary search tree.

#### Example 2:
> Input: root = [5,1,4,null,null,3,6]
>
> Output: false

> Explanation: The binary tree is not a valid binary search tree because the value 3 is in the right subtree of a node with the value 4.

## Constraints

- The number of nodes in the tree is in the range `[1, 10^4]`.
- `-2^31 <= Node.val <= 2^31 - 1`

## Notes

- Consider using a recursive approach to traverse the tree and validate the BST properties.

## Concept
For a BST (Binary Search Tree), the condition is that left < root < right, which means each node's left child must be less than the node, and the right child must be greater than the node. Therefore, assign a maximum node value for the left subtree, and so on.
