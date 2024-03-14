## Problem Decsription

Given the `root` of a binary tree, return **the vertical order traversal** of its nodes' values. (i.e., from top to bottom, column by column).

If two nodes are in the same row and column, the order should be from **left to right**.

 

#### Example 1:
![Ex1](https://assets.leetcode.com/uploads/2021/01/28/vtree1.jpg)
```plaintext
Input: root = [3,9,20,null,null,15,7]
Output: [[9],[3,15],[20],[7]]
```
#### Example 2:
![Ex2](https://assets.leetcode.com/uploads/2021/01/28/vtree2-1.jpg)
```plaintext
Input: root = [3,9,8,4,0,1,7]
Output: [[4],[9],[3,0,1],[8],[7]]
```
#### Example 3:
![Ex3](https://assets.leetcode.com/uploads/2021/01/28/vtree2.jpg)
```plaintext
Input: root = [3,9,8,4,0,1,7,null,null,null,2,5]
Output: [[4],[9,5],[3,0,1],[8,2],[7]]
 ```

## Constraints

- The number of nodes in the tree is in the range `[0, 100]`.
- `-100 <= Node.val <= 100`

## Concept
1. Utilize a map for automatic sorting, accommodating negative positions, and sort pairs consisting of {depth, val}. The map ensures elements are ordered primarily by depth.
2. Sort elements based on depth, maintaining their original left-to-right order for elements at the same depth.
