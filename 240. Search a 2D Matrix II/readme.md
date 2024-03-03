## Problem Decsription

Write an efficient algorithm that searches for a value `target` in an `m x n` integer matrix `matrix`. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.

#### Example 1:
```plaintext
Input: matrix = [
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
], target = 5
Output: true
```
#### Example 2:
```plaintext
Input: matrix = [
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
], target = 20
Output: false
```
## Constraints

- `m == matrix.length`
- `n == matrix[i].length`
- `1 <= n, m <= 300`
- `-10^9 <= matix[i][j] <= 10^9`
- `-10^9 <= target <= 10^9`

## Concept
1. Start from the bottom-left corner. If matrix[i][j] is greater than the target, move up a row (decrease i). If matrix[i][j] is less than the target, move right a column (increase j).
2. If the target is not found, return false.
