## Problem Description

Given the `head` of a linked list, return *the list after sorting it in ascending order*.

#### Example 1:
```plaintext
Input: head = [4,2,1,3]
Output: [1,2,3,4]
```
![Example 1](https://assets.leetcode.com/uploads/2020/09/14/sort_list_1.jpg)

#### Example 2:
```plaintext
Input: head = [-1,5,3,4,0]
Output: [-1,0,3,4,5]
```
![Example 2](https://assets.leetcode.com/uploads/2020/09/14/sort_list_2.jpg)

#### Example 3:
```plaintext
Input: head = []
Output: []
```
## Constraints

- The number of nodes in the list is in the range `[0, 5 * 10^4]`.
- `-10^5 <= Node.val <= 10^5`

## Follow up

Can you sort the linked list in `O(n log n)` time and `O(1)` memory (i.e., constant space)?

## Concept
1. Split to two list, until to the end
2. Merge two list by function
