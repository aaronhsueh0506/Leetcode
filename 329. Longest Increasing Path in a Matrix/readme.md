## Problem Description

Given an `m x n` integers `matrix`, return *the length of the longest increasing path in `matrix`*.

From each cell, you can either move in four directions: left, right, up, or down. You may **not** move diagonally or move outside the boundary (i.e., wrap-around is not allowed).

#### Example 1:

![Example 1 Image](https://assets.leetcode.com/uploads/2021/01/05/grid1.jpg)
```plaintext\n
Input: matrix = [[9,9,4],[6,6,8],[2,1,1]]
Output: 4
Explanation: The longest increasing path is [1, 2, 6, 9].
```
#### Example 2:

![Example 2 Image](https://assets.leetcode.com/uploads/2021/01/27/tmp-grid.jpg)
```plaintext\n
Input: matrix = [[3,4,5],[3,2,6],[2,2,1]]
Output: 4
Explanation: The longest increasing path is [3, 4, 5, 6]. Moving diagonally is not allowed.
```
#### Example 3:
```plaintext\n
Input: matrix = [[1]]
Output: 1
```
## Constraints

- `m == matrix.length`
- `n == matrix[i].length`
- `1 <= m, n <= 200`
- `0 <= matrix[i][j] <= 231 - 1`

## Concept
1. Perform DFS from each cell, updating the path length as 1 + result of the DFS call.
2. If a cell has already been visited, add its recorded path length to the current path length to calculate the total path length.
3. DP record the path which start from this cell
