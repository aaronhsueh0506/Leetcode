## Problem Decsription

Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.

According to the [definition of LCA on Wikipedia](https://en.wikipedia.org/wiki/Lowest_common_ancestor): “The lowest common ancestor is defined between two nodes `p` and `q` as the lowest node in `T` that has both `p` and `q` as descendants (where we allow **a node to be a descendant of itself**).”

#### Example 1:

![Example 1](https://assets.leetcode.com/uploads/2018/12/14/binarysearchtree_improved.png)
```plaintext
Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 8
Output: 6
Explanation: The LCA of nodes 2 and 8 is 6.
```

#### Example 2:

![Example 2](https://assets.leetcode.com/uploads/2018/12/14/binarysearchtree_improved.png)
```plaintext
Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 4
Output: 2
Explanation: The LCA of nodes 2 and 4 is 2, since a node can be a descendant of itself according to the LCA definition.
```

#### Example 3:
```plaintext
Input: root = [2,1], p = 2, q = 1
Output: 2
```

## Constraints

- The number of nodes in the tree is in the range `[2, 10^5]`.
- `-10^9 <= Node.val <= 10^9`
- All `Node.val` are **unique**.
- `p != q`
- `p` and `q` will exist in the BST.

**Follow up:** Can you find the LCA traversing the tree, without checking nodes more than once?

## Concept
1. Since it's a BST (Binary Search Tree), all values in the left subtree are less than the root.
2. If the root's value is greater than the value of max(p, q), it means both p and q are in the left subtree.
3. If the root's value is less than the value of min(p, q), it means both p and q are in the right subtree.
