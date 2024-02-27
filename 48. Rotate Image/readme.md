## Problem Description

You are given an `n x n` 2D `matrix` representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image **in-place**, which means you have to modify the input 2D matrix directly. **DO NOT** allocate another 2D matrix and do the rotation.

#### Example 1:
```plaintext
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]
```
![Example 1](https://assets.leetcode.com/uploads/2020/08/28/mat1.jpg)
```plaintext
Explanation: The matrix is rotated 90 degrees clockwise.
```
#### Example 2:
```plaintext
Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
```
![Example 2](https://assets.leetcode.com/uploads/2020/08/28/mat2.jpg)
```plaintext
Explanation: The matrix is rotated 90 degrees clockwise.
```
#### Example 3:
```plaintext
Input: matrix = [[1]]
Output: [[1]]
```
#### Example 4:
```plaintext
Input: matrix = [[1,2],[3,4]]
Output: [[3,1],[4,2]]
```
## Constraints

- `n == matrix.length == matrix[i].length`
- `1 <= n <= 20`
- `-1000 <= matrix[i][j] <= 1000`

## Concept
1. Find dentify the relationship between the x and y indices.
2. In every layer, rotate elements from index i to n-1-i, with i ranging from 0 to n/2 (because reaching the middle of the square completes the rotation).
