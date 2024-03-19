## Problem Decsription

You are given an integer `n`. There is an undirected graph with `n` nodes, numbered from `0` to `n - 1`. You are given a 2D integer array `edges` where `edges[i] = [ai, bi]` denotes that there exists an undirected edge connecting nodes `ai` and `bi`.

Return the **number of pairs** of different nodes that are unreachable from each other.

 

#### Example 1:
![Ex](https://assets.leetcode.com/uploads/2022/05/05/tc-3.png)
```plaintext
Input: n = 3, edges = [[0,1],[0,2],[1,2]]
Output: 0
Explanation: There are no pairs of nodes that are unreachable from each other. Therefore, we return 0.
```
#### Example 2:
![Ex2](https://assets.leetcode.com/uploads/2022/05/05/tc-2.png)
```plaintext
Input: n = 7, edges = [[0,2],[0,5],[2,4],[1,6],[5,4]]
Output: 14
Explanation: There are 14 pairs of nodes that are unreachable from each other:
[[0,1],[0,3],[0,6],[1,2],[1,3],[1,4],[1,5],[2,3],[2,6],[3,4],[3,5],[3,6],[4,6],[5,6]].
Therefore, we return 14.
```

## Constraints

- `1 <= n <= 10^5`
- `0 <= edges.length <= 2 * 10^5`
- `edges[i].length == 2`
- `0 <= ai, bi < n`
- `ai != bi`
- There are no repeated edges.

## Concept
1. Utilize Union Find to count the number of nodes under this root.
2. The number of pairs will be increased by n - number of nodes under this root, and the result should be divided by 2.
