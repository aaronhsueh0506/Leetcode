Given the `root` of a binary tree, flatten the tree into a "linked list":

- The "linked list" should use the same `TreeNode` class where the `right` child pointer points to the next node in the list and the `left` child pointer is always `null`.
- The "linked list" should be in the same order as a pre-order traversal of the binary tree.
 

#### Example 1:
![Ex](https://assets.leetcode.com/uploads/2021/01/14/flaten.jpg)
```plaintext
Input: root = [1,2,5,3,4,null,6]
Output: [1,null,2,null,3,null,4,null,5,null,6]
```
#### Example 2:
```plaintext
Input: root = []
Output: []
```
#### Example 3:
```plaintext
Input: root = [0]
Output: [0]
 ```

## Constraints

- The number of nodes in the tree is in the range `[0, 2000]`.
- `-100 <= Node.val <= 100`

## Concept
1. Go the left side and connect left to right.
2. Go the last node of left side and connect to the first node of right side.
