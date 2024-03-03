## Problem Description

You are given an `m x n` integer matrix `mat`. You can move from a cell to any other cell in the next row. From a cell in the last row, you cannot move to any other cell.

A strictly increasing path in the matrix is a path such that the elements in the path are in strictly increasing order.

Return *the maximum number of cells in a strictly increasing path in the matrix*.

#### Example 1:

![Example 1](https://assets.leetcode.com/uploads/2022/08/09/example1.png)
```plaintext
Input: mat = [[1,3,2],[4,6,8],[5,9,7]]
Output: 5
Explanation: The path with the maximum number of cells in strictly increasing order is shown in the figure above.
```

#### Example 2:

![Example 2](https://assets.leetcode.com/uploads/2022/08/09/example2.png)
```plaintext
Input: mat = [[1]]
Output: 1
Explanation: The path with the maximum number of cells in strictly increasing order is the cell itself.
```

## Constraints:

- `m == mat.length`
- `n == mat[i].length`
- `1 <= m, n <= 1000`
- `1 <= mat[i][j] <= 10^5`

## Concept
1. Push all cells into an array and sort them.
2. Use a for-loop to update indices i to j (which have the same value).
3. Utilize dynamic programming (DP) and variables row and col to record the maximum steps for m rows and n columns, respectively.
4. After updating the DP table, update row and col accordingly.
