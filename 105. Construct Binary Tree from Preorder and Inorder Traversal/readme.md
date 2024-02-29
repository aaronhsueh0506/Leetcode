## Problem Decsription

Given two integer arrays `preorder` and `inorder` where `preorder` is the preorder traversal of a binary tree and `inorder` is the inorder traversal of the same tree, construct and return the binary tree.

#### Example 1:

![Example 1](https://assets.leetcode.com/uploads/2021/02/19/tree.jpg)
```plaintext
Input: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
Output: [3,9,20,null,null,15,7]
```
#### Example 2:
```plaintext
Input: preorder = [-1], inorder = [-1]
Output: [-1]
```

## Constraints

- `1 <= preorder.length <= 3000`
- `inorder.length == preorder.length`
- `-3000 <= preorder[i], inorder[i] <= 3000`
- `preorder` and `inorder` consist of unique values.
- Each value of `inorder` also appears in `preorder`.
- `preorder` is **guaranteed** to be the preorder traversal of the tree.
- `inorder` is **guaranteed** to be the inorder traversal of the tree.

## Concept
1. preorder is root, left, right, inorder is  left, root, right
2. start from preorder left, if inorder[i] == preorder[left], left side of inorder[i] is left subtree
3. left subtree for inorder is ileft to i-1, for preorder is pleft+1 to (pleft+1+i-1-ileft) pleft+i-ileft
4. right subtree for inorder is i+1 to iright, for preorder is pleft+i-ileft+1 to pright
