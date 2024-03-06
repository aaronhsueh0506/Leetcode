## Problem Description

You have a graph of `n` nodes labeled from `0` to `n - 1`. You are given an integer n and a list of `edges` where `edges[i] = [ai, bi]` indicates that there is an undirected edge between nodes `ai` and `bi` in the graph.

Return `true` if the edges of the given graph make up a valid tree, and `false` otherwise.

#### Example 1:
```plaintext
Input: n = 5, edges = [[0,1],[0,2],[0,3],[1,4]]
Output: true
```
#### Example 2:
```plaintext
Input: n = 5, edges = [[0,1],[1,2],[2,3],[1,3],[1,4]]
Output: false
 ```

## Constraints

- `1 <= n <= 2000`
- `0 <= edges.length <= 5000`
- `edges[i].length == 2`
- `0 <= ai, bi < n`
- `ai != bi`
- There are no self-loops or repeated edges.

## Concept
1. By using Union Find, if we find the same root, it indicates that there is a cycle.
2. We return `edges.size() == n - 1` to check that there are enough edges to connect `n` nodes.