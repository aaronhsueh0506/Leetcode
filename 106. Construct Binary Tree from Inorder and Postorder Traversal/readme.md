## Problem Decsription

Given two integer arrays `inorder` and `postorder` where `inorder` is the inorder traversal of a binary tree and `postorder` is the postorder traversal of the same tree, construct and return the binary tree.

#### Example 1:

![Example 1](https://assets.leetcode.com/uploads/2021/02/19/tree.jpg)
```plaintext
Input: inorder = [9,3,15,20,7], postorder = [9,15,7,20,3]
Output: [3,9,20,null,null,15,7]
```

### Example 2:
```plaintext
Input: inorder = [-1], postorder = [-1]
Output: [-1]
```

## Constraints

- `1 <= inorder.length <= 3000`
- `postorder.length == inorder.length`
- `-3000 <= inorder[i], postorder[i] <= 3000`
- `inorder` and `postorder` consist of unique values.
- Each value of `inorder` also appears in `postorder`.
- `postorder` is **guaranteed** to be the postorder traversal of the tree.
- `inorder` is **guaranteed** to be the inorder traversal of the tree.

## Concept
1. inorder is left, root ,right, postorder is left, right, root.
2. start from postorder right, if inorder[i] == postorder[right], left side of inorder[i] is left subtree
3. left subtree for inorder is ileft to i-1, for postorder is pleft to pleft + i-1 -ileft
4. right subtree for inorder is i+1 to iright, for postorder is pleft+i-ileft to pright-1
