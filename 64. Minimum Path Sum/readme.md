## Problem Description

Given a `m x n` grid filled with non-negative numbers, find a path from top left to bottom right, which minimizes the sum of all numbers along its path.

**Note:** You can only move either down or right at any point in time.

#### Example 1:

![Example 1](https://assets.leetcode.com/uploads/2020/11/05/minpath.jpg)
```plaintext
Input: grid = [[1,3,1],[1,5,1],[4,2,1]]
Output: 7
Explanation: Because the path 1 → 3 → 1 → 1 → 1 minimizes the sum.
```

### Example 2:
```plaintext
Input: grid = [[1,2,3],[4,5,6]]
Output: 12
```

## Constraints

- `m == grid.length`
- `n == grid[i].length`
- `1 <= m, n <= 200`
- `0 <= grid[i][j] <= 100`

## Concept
1. Use DP to record the minimum sum at each cell.
2. The first column and first row have only one path, so their sums can be computed directly.
3. Update dp[i][j] with min(dp[i-1][j], dp[i][j-1]) + grid[i][j] to include the current cell's value.
