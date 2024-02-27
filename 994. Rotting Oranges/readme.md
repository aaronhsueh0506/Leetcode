## Problem Description

Given an `m x n` grid where each cell can have one of three values:
- `0` representing an empty cell,
- `1` representing a fresh orange, or
- `2` representing a rotten orange,

every minute, any fresh orange that is 4-directionally adjacent to a rotten orange becomes rotten.

Return *the minimum number of minutes that must elapse until no cell has a fresh orange*. If this is impossible, return `-1`.

#### Example 1:
```plaintext
Input: grid = [
[2,1,1],
[1,1,0],
[0,1,1]
]
Output: 4

Explanation: The orange in the bottom left corner (grid[2][0]) is never rotten, because rotting only happens 4-directionally.
```
#### Example 2:
```plaintext
Input: grid = [
[2,1,1],
[0,1,1],
[1,0,1]
]
Output: -1

Explanation: The orange in the bottom left corner (grid[2][2]) is never rotten, because rotting only happens 4-directionally.
```
#### Example 3:
```plaintext
Input: grid = [
[0,2]
]
Output: 0

Explanation: Since there are already no fresh oranges at minute 0, the answer is 0.
```
## Constraints

- `m == grid.length`
- `n == grid[i].length`
- `1 <= m, n <= 10`
- `grid[i][j]` is `0`, `1`, or `2`.

## Concept
1. Use BFS. Place the positions of '2's in a queue and record the number of '1's.
2. Spread in all four directions. If grid[x][y] is '1', change it to '2' and enqueue its position.
3. If fresh is greater than 0, it means not all oranges can rot; otherwise, return the time elapsed.
