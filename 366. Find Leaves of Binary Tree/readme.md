## Problem Decsription

Given the `root` of a binary tree, collect a tree's nodes as if you were doing this:

* Collect all the leaf nodes.
* Remove all the leaf nodes.
* Repeat until the tree is empty.
 

#### Example 1:
```plaintext
Input: root = [1,2,3,4,5]
Output: [[4,5,3],[2],[1]]
Explanation:
[[3,5,4],[2],[1]] and [[3,4,5],[2],[1]] are also considered correct answers since per each level it does not matter the order on which elements are returned.
```
#### Example 2:
```plaintext
Input: root = [1]
Output: [[1]]
```

## Constraints

- The number of nodes in the tree is in the range `[1, 100]`.
- `-100 <= Node.val <= 100`

## Concept
1. Obtain the level of each node (return -1 for null, otherwise return 1 + max(traversal(left), traversal(right))).
2. If res has fewer elements than level + 1, create a new empty list {} in res. Then, append root->val to res[level].
