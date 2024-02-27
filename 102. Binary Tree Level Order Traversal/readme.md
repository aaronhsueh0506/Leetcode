## Problem Description

Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

#### Example 1:
``` plaintext
Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]

Explanation: The binary tree's level order traversal is shown in the output.
```

#### Example 2:
``` plaintext
Input: root = [1]
Output: [[1]]

Explanation: The binary tree has only one node, so its level order traversal is simply [[1]].
```
#### Example 3:
``` plaintext
Input: root = []
Output: []

Explanation: The binary tree is empty, so its level order traversal is an empty list.
```
## Constraints

- The number of nodes in the tree is in the range `[0, 2000]`.
- `-1000 <= Node.val <= 1000`

## Notes

- Consider using a queue to keep track of the nodes at each level.

## Concept
1. Traversal left first, then go right.
2. If it is the first element for this level, create a new space
