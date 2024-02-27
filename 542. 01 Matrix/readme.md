## Problem Description

Given an `m x n` binary matrix `mat`, return *the distance of the nearest `0` for each cell*.

The distance between two adjacent cells is `1`.

#### Example 1:
```plaintext
Input: mat = [
[0,0,0],
[0,1,0],
[0,0,0]
]
Output: [
[0,0,0],
[0,1,0],
[0,0,0]
]

Explanation: The nearest `0` for every cell is itself.
```
#### Example 2:
```plaintext
Input: mat = [
[0,0,0],
[0,1,0],
[1,1,1]
]
Output: [
[0,0,0],
[0,1,0],
[1,2,1]
]

Explanation: The nearest `0` for each cell are as shown in the output.
```
### Constraints

- `m == mat.length`
- `n == mat[i].length`
- `1 <= m, n <= 10^4`
- `1 <= m * n <= 10^4`
- `mat[i][j]` is either `0` or `1`.
- There is at least one `0` in `mat`.

## Concept
1. initial DP as 10^4 + 1
2. if mat[i][j] is 0, set DP[i][j] to 0
3. scan from left-top side, find minimum between DP[i][j] or last DP[i][j] plus 1.
4. scan from right-bottom again.
