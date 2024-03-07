## Problem Description

Given a rows x cols binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.
 

#### Example 1:
![Ex](https://assets.leetcode.com/uploads/2020/09/14/maximal.jpg)
```plaintext
Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
Output: 6
Explanation: The maximal rectangle is shown in the above picture.
```
#### Example 2:
```plaintext
Input: matrix = [["0"]]
Output: 0
```
#### Example 3:
```plaintext
Input: matrix = [["1"]]
Output: 1
 ```

## Constraints

- `rows == matrix.length`
- `cols == matrix[i].length`
- `1 <= row, cols <= 200`
- `matrix[i][j]` is `'0'` or `'1'`.

## Concept
Treat each row as a histogram to calculate the largest rectangle.
Reset the stack and heights for each row. The size of heights is n + 1, with only the 0 to nth element being updated. The last element is set to 0 to signal the stack when to perform the rectangle calculation.
