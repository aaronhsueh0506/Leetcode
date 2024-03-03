## Problem Description

You are given an `n x n` binary matrix `grid` where `1` represents land and `0` represents water.

An island is a 4-directionally connected group of `1`'s not connected to any other `1`'s. There are exactly two islands in `grid`.

You may change `0`'s to `1`'s to connect the two islands to form one island.

Return the smallest number of `0`'s you must flip to connect the two islands.



#### Example 1:
```plaintext
Input: A = [[0,1],[1,0]]
Output: 1
```

#### Example 2:
```plaintext
Input: A = [[0,1,0],[0,0,0],[0,0,1]]
Output: 2
```

#### Example 3:
```plaintext
Input: A = [[1,1,1,1,1],[1,0,0,0,1],[1,0,1,0,1],[1,0,0,0,1],[1,1,1,1,1]]
Output: 1
```

## Constraints

- `n == grid.length == grid[i].length`
- `2 <= n <= 100`
- `grid[i][j]` is either `0` or `1`.
- There are exactly two islands in `grid`.

## Concept
1. It guarantees 2 islands; therefore, find the first island using DFS and mark it as 2.
2. Using BFS, explore from the first island. If the next one is 1, it means we have found the answer. If the next one is 0, it means we need to build a bridge.
