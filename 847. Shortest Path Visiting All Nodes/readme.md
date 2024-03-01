## Problem Description

You have an undirected, connected graph of `n` nodes labeled from `0` to `n - 1`. You are given an array `graph` where `graph[i]` is a list of all the nodes connected with node `i` by an edge.

Return *the length of the shortest path that visits every node*. You may start and stop at any node, you may revisit nodes multiple times, and you may reuse edges.

#### Example 1:

![Example 1](https://assets.leetcode.com/uploads/2021/05/12/shortest1-graph.jpg)
```plaintext
Input: graph = [[1,2,3],[0],[0],[0]]
Output: 4
Explanation: One possible path is [1,0,2,0,3]
```

#### Example 2:

![Example 2](https://assets.leetcode.com/uploads/2021/05/12/shortest2-graph.jpg)
```plaintext
Input: graph = [[1],[0,2,4],[1,3,4],[2],[1,2]]
Output: 4
Explanation: One possible path is [0,1,4,2,3]
```

## Constraints

- `n == graph.length`
- `1 <= n <= 12`
- `0 <= graph[i].length < n`
- `0 <= graph[i][j] < n`
- `graph[i][j] != i` (i.e., there will be no self-loops).
- The graph is connected and each pair of nodes may have more than one path between them.

## Concept
1. Use BFS, starting from each node.
2. Since the maximum value of n is 12, use bits to record which nodes have been visited.
