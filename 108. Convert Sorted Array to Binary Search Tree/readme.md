## Problem Description

Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.

#### Example 1:
```plaintext
Input: nums = [-10,-3,0,5,9]
Output: [0,-3,9,-10,null,5]
Explanation: [0,-10,-3,null,5,9] is also accepted:
```
#### Example 2:
```plaintext
Input: nums = [1,3]
Output: [3,1]
Explanation: [1,3] and [3,1] are both a height-balanced BSTs.
```
## Constraints

- `1 <= nums.length <= 10^4`
- `-10^4 <= nums[i] <= 10^4`
- `nums` is sorted in a strictly increasing order.

## Concept
Given that nums is sorted, choose the middle element as the root. Elements on the left side, all of which are less than nums[mid], are placed in the left subtree. Similarly, handle the right side for the right subtree.
