## Problem Description

Given an `m x n` 2D binary grid `grid` which represents a map of `'1'`s (land) and `'0'`s (water), return the number of islands.

An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

#### Example 1:
```plaintext
Input: grid = [
["1","1","1","1","0"],
["1","1","0","1","0"],
["1","1","0","0","0"],
["0","0","0","0","0"]
]
Output: 1
```
#### Example 2:
```plaintext
Input: grid = [
["1","1","0","0","0"],
["1","1","0","0","0"],
["0","0","1","0","0"],
["0","0","0","1","1"]
]
Output: 3
```
## Constraints

- `m == grid.length`
- `n == grid[i].length`
- `1 <= m, n <= 300`
- `grid[i][j]` is either `'1'` or `'0'`.

## Notes

- Explore each land (cell with `'1'`) and mark it as visited by changing its value to prevent multiple counts. Use Depth-First Search (DFS) or Breadth-First Search (BFS) to explore adjacent lands.

## Concept
1. Use DFS and a visited array to find the islands.
2. Alternatively, directly change '1' to '0' to eliminate the need for a visited array.
