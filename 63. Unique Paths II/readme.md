## Problem Decsription

A robot is located at the top-left corner of a `m x n` grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

Now consider if some obstacles are added to the grids. How many unique paths would there be?

An obstacle and space is marked as `1` and `0` respectively in the grid.

#### Example 1:

![Example 1](https://assets.leetcode.com/uploads/2020/11/04/robot1.jpg)
```plaintext
Input: obstacleGrid = [[0,0,0],[0,1,0],[0,0,0]]
Output: 2
Explanation: There is one obstacle in the middle of the 3x3 grid above.
There are two ways to reach the bottom-right corner:

Right -> Right -> Down -> Down
Down -> Down -> Right -> Right
```

#### Example 2:

![Example 2](https://assets.leetcode.com/uploads/2020/11/04/robot2.jpg)
```plaintext
Input: obstacleGrid = [[0,1],[0,0]]
Output: 1
```

## Constraints

- `m == obstacleGrid.length`
- `n == obstacleGrid[i].length`
- `1 <= m, n <= 100`
- `obstacleGrid[i][j]` is `0` or `1`.

## Concept
1. Use DP to record the number of unique paths up to index [i][j]. The formula is dp[i][j] = dp[i-1][j] + dp[i][j-1].
2. If grid[i][j] is 1, it means there is an obstacle at index [i][j], so do not update dp[i][j].
