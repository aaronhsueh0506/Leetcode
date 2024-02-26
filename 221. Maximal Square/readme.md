## Problem Description

Given an `m x n` binary matrix filled with `0`'s and `1`'s, find the largest square containing only `1`'s and return its area.

#### Example 1:
> Input: matrix = [
>
> ["1","0","1","0","0"],
>
> ["1","0","1","1","1"],
>
> ["1","1","1","1","1"],
>
> ["1","0","0","1","0"]
>
> ]
>
> Output: 4

![Example 1](https://assets.leetcode.com/uploads/2020/11/26/max1grid.jpg)

#### Example 2:
> Input: matrix = [
>
> ["0","1"],
>
> ["1","0"]
>
> ]
>
> Output: 1

#### Example 3:
> Input: matrix = [["0"]]
>
> Output: 0

## Constraints

- `m == matrix.length`
- `n == matrix[i].length`
- `1 <= m, n <= 300`
- `matrix[i][j]` is `'0'` or `'1'`.

## Concept
1. To  form a square, you need min(dp[i-1][j-1], dp[i-1][j], dp[i][j-1]) + 1 and matrix[i][j] == '1'.
2. dp[i][j] indicates that with i,j as the right-bottom corner, there exists an n*n square.
