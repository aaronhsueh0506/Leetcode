## Problem Description

Write an efficient algorithm that searches for a value `target` in an `m x n` matrix. This matrix has the following properties:

- Integers in each row are sorted from left to right.
- The first integer of each row is greater than the last integer of the previous row.

#### Example 1:

![Example 1](https://assets.leetcode.com/uploads/2020/10/05/mat.jpg)
```plaintext
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
```
#### Example 2:

![Example 2](https://assets.leetcode.com/uploads/2020/10/05/mat2.jpg)
```plaintext
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
```
## Constraints:

- `1 <= m, n <= 100`
- `-10^4 <= matrix[i][j], target <= 10^4`

## Concept
1. Check in which row and find in this row
