## Problem Description

You have a graph of `n` nodes. You are given an integer `n` and an array `edges` where `edges[i] = [ai, bi]` indicates that there is an edge between `ai` and `bi` in the graph.

Return the number of connected components in the graph.

Example 1:

```plaintext
Input: n = 5, edges = [[0,1],[1,2],[3,4]]
Output: 2
```
Example 2:

```plaintext
Input: n = 5, edges = [[0,1],[1,2],[2,3],[3,4]]
Output: 1
```

## Constraints

- `1 <= n <= 2000`
- `1 <= edges.length <= 5000`
- `edges[i].length == 2`
- `0 <= ai <= bi < n`
- `ai != bi`
- There are no repeated edges.

## Concept
Using Union Find, if we change the root, decrement res by 1. If find same root, means in a same part.
