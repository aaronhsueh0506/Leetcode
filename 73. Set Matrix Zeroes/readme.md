## Description

Given an `m x n` matrix, if an element is `0`, set its entire row and column to `0`. Do it in-place.

#### Example 1:
```plaintext
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
Explanation: The element at position (1,1) is `0`, so its entire row and column are set to `0`.
```
#### Example 2:
```plaintext
Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
Explanation: The element at position (0,0) and (0,3) are `0`, so their entire rows and columns are set to `0`.
```
### Constraints

- `m == matrix.length`
- `n == matrix[0].length`
- `1 <= m, n <= 200`
- `-2^31 <= matrix[i][j] <= 2^31 - 1`

### Follow Up:

- A straightforward solution using `O(mn)` space is probably a bad idea.
- A simple improvement uses `O(m + n)` space, but still not the best solution.
- Could you devise a constant space solution?


## Concepts
1. Record two booleans to determine if the first row and the first column contain zeros.
2. Starting from the second row and the second column, check each row and column. If an element [i,j] is 0, set matrix[i][0] and matrix[0][j] to 0.
3. Utilize the first row and first column as markers. If matrix[i][j] is 0, mark the corresponding first row and first column elements to indicate the entire row i and column j should be set to 0.
4. If the first row boolean is true, set the entire first row to 0. Apply the same logic to the first column based on its boolean flag.
