## Problem Description

Given an `m x n` matrix, return all elements of the matrix in spiral order.

### Examples

#### Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

vbnet
Copy code
Explanation: The elements are returned in a spiral order as shown:  
![Spiral Order](https://assets.leetcode.com/uploads/2020/11/13/spiral1.jpg)

#### Example 2:
Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]

markdown
Copy code
Explanation: The elements are returned in a spiral order as shown:  
![Spiral Order 2](https://assets.leetcode.com/uploads/2020/11/13/spiral.jpg)

### Constraints

- `m == matrix.length`
- `n == matrix[i].length`
- `1 <= m, n <= 10`
- `-100 <= matrix[i][j] <= 100`
