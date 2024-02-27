## Problem Description

Given an `m x n` matrix of non-negative integers representing the height of each unit cell in a continent, the "Pacific ocean" touches the left and top edges of the matrix and the "Atlantic ocean" touches the right and bottom edges.

Water can only flow in four directions (up, down, left, or right) from a cell to another one with height equal or lower.

Find the list of grid coordinates where water can flow to both the Pacific and Atlantic oceans.

#### Example 1:
```plaintext
Input: heights = [
[1,2,2,3,5],
[3,2,3,4,4],
[2,4,5,3,1],
[6,7,1,4,5],
[5,1,1,2,4]
]
Output: [[0,4],[1,3],[1,4],[2,2],[3,0],[3,1],[4,0]]

Explanation: The water can flow to both the Pacific and Atlantic oceans at the coordinates:
- Pacific -> left and top edges
- Atlantic -> right and bottom edges
```
#### Example 2:
```plaintext
Input: heights = [[2,1],[1,2]]
Output: [[0,0],[0,1],[1,0],[1,1]]
```
## Constraints

- `m == heights.length`
- `n == heights[i].length`
- `1 <= m, n <= 200`
- `0 <= heights[i][j] <= 10^5`

## Concept
1. Mark all cells from which water can flow to both the Pacific and Atlantic oceans.
2. If a cell can be reached from both oceans, it means the cell is at the boundary.
