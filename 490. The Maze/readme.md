## Problem Description

There is a ball in a `maze` with empty spaces (represented as `0`) and walls (represented as `1`). The ball can go through the empty spaces by rolling **up, down, left or right**, but it won't stop rolling until hitting a wall. When the ball stops, it could choose the next direction.

Given the `m x n` `maze`, the ball's `start` position and the `destination`, where `start = [startrow, startcol]` and `destination = [destinationrow, destinationcol]`, return `true` if the ball can stop at the destination, otherwise return `false`.

You may assume that **the borders of the maze are all walls** (see examples).

 

Example 1:
![Ex1](https://assets.leetcode.com/uploads/2021/03/31/maze1-1-grid.jpg)
```plaintext
Input: maze = [[0,0,1,0,0],[0,0,0,0,0],[0,0,0,1,0],[1,1,0,1,1],[0,0,0,0,0]], start = [0,4], destination = [4,4]
Output: true
Explanation: One possible way is : left -> down -> left -> down -> right -> down -> right.
```
Example 2:
![Ex2](https://assets.leetcode.com/uploads/2021/03/31/maze1-2-grid.jpg)
```plaintext
Input: maze = [[0,0,1,0,0],[0,0,0,0,0],[0,0,0,1,0],[1,1,0,1,1],[0,0,0,0,0]], start = [0,4], destination = [3,2]
Output: false
Explanation: There is no way for the ball to stop at the destination. Notice that you can pass through the destination but you cannot stop there.
```
Example 3:
```plaintext
Input: maze = [[0,0,0,0,0],[1,1,0,0,1],[0,0,0,0,0],[0,1,0,0,1],[0,1,0,0,0]], start = [4,3], destination = [0,1]
Output: false
```

## Constraints

- `m == maze.length`
- `n == maze[i].length`
- `1 <= m, n <= 100`
- `maze[i][j]` is `0` or `1`.
- `start.length == 2`
- `destination.length == 2`
- `0 <= startrow, destinationrow <= m`
- `0 <= startcol, destinationcol <= n`
- Both the ball and the destination exist in an empty space, and they will not be in the same position initially.
- The maze contains **at least 2 empty spaces**.

## Concept
Solution: DFS
1. Start from the `start` position and proceed in all four directions until coming to a stop.
2. Mark `maze[nx][ny]` with `-1` to indicate it has been visited. Then, call DFS with `(nx, ny)` as the new start position. Return `true` if the destination is found.

Solution: BFS
1. Place the `start` position in a queue and continue in all four directions until coming to a stop.
2. If the `stop` position has not been visited, add it to the queue.
