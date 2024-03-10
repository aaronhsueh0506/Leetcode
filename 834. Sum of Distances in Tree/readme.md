## Problem Description

There is an undirected connected tree with `n` nodes labeled from `0` to `n - 1` and `n - 1` edges.

You are given the integer `n` and the array `edges` where `edges[i] = [ai, bi]` indicates that there is an edge between nodes `ai` and `bi` in the tree.

Return an array `answer` of length `n` where `answer[i]` is the sum of the distances between the `ith` node in the tree and all other nodes.


#### Example 1:
![Ex1](https://assets.leetcode.com/uploads/2021/07/23/lc-sumdist1.jpg)
```plaintext
Input: n = 6, edges = [[0,1],[0,2],[2,3],[2,4],[2,5]]
Output: [8,12,6,10,10,10]
Explanation: The tree is shown above.
We can see that dist(0,1) + dist(0,2) + dist(0,3) + dist(0,4) + dist(0,5)
equals 1 + 1 + 2 + 2 + 2 = 8.
Hence, answer[0] = 8, and so on.
```
#### Example 2:
![Ex2](https://assets.leetcode.com/uploads/2021/07/23/lc-sumdist2.jpg)
```plaintext
Input: n = 1, edges = []
Output: [0]
```
#### Example 3:
![Ex3](https://assets.leetcode.com/uploads/2021/07/23/lc-sumdist3.jpg)
```plaintext
Input: n = 2, edges = [[1,0]]
Output: [1,1]
```

## Constraints

- `1 <= n <= 3 * 10^4`
- `edges.length == n - 1`
- `edges[i].length == 2`
- `0 <= ai, bi < n`
- `ai != bi`
- The given input represents a valid tree.

## Concept
1. Create an undirected graph for each pair.
2. Count the nodes for each node (including itself) and update `res[i]` as `nodes[j] + res[j]` (which represents the path sum from all child node j which under i to i).
3. After the first update is completed, we finish the path of the root node and other nodes that have children.
4. Move the result from dynamic programming to the current node. The idea is that the nodes which are on the left side of the current node need to take one more step, while the nodes under the current node (including itself) can take one less step.
5. So the rule is `res[new] = res[old] + (n - nodes[new]) - nodes[new]`. Here, `n - nodes[new]` accounts for the nodes on the left side, and `nodes[new]` accounts for the nodes under the current node.
