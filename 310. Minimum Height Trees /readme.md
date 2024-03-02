## Problem Description

For an undirected graph with tree characteristics, we can choose any node as the root. The result graph is then a rooted tree. Among all possible rooted trees, those with minimum height are called minimum height trees (MHTs). Given a tree of `n` nodes labelled from `0` to `n - 1`, and an array of `n - 1` `edges` where `edges[i] = [a, b]` represents an undirected edge between the two nodes `a` and `b` in the tree, you can choose any node of the tree as the root. When you select a node `x` as the root, the result tree has height `h`. Among all possible rooted trees, those with minimum height (i.e. `min(h)`)  are called **minimum height trees** (MHTs).

Return a list of all **MHTs'** root labels. You can return the answer in **any order**.

The **height** of a rooted tree is the number of edges on the longest downward path between the root and a leaf.

#### Example 1:

![Example 1](https://assets.leetcode.com/uploads/2020/09/01/e1.jpg)
```plaintext
Input: n = 4, edges = [[1, 0], [1, 2], [1, 3]]
Output: [1]
Explanation: As shown, the height of the tree is 1 when the root is the node with label 1 which is the only MHT.
```

#### Example 2:

![Example 2](https://assets.leetcode.com/uploads/2020/09/01/e2.jpg)
```plaintext
Input: n = 6, edges = [[3,0],[3,1],[3,2],[3,4],[5,4]]
Output: [3,4]
```

#### Example 3:
```plaintext
Input: n = 1, edges = []
Output: [0]
```
#### Example 4:
```plaintext
Input: n = 2, edges = [[0,1]]
Output: [0,1]
```

## Constraints

- `1 <= n <= 2 * 10^4`
- `edges.length == n - 1`
- `0 <= a, b < n`
- `a != b`
- All the pairs `(a, b)` are distinct.
- The given input is **guaranteed** to be a tree and there will be **no repeated** edges.

## Concept
1. For MHT, the goal is to explore the tree with fewer branches.
2. Gradually remove the nodes from the outer layer (nodes with only one connecting edge) until at most two nodes remain. This is because the root of a Minimum Height Tree can be either one node or two nodes.
3. With each iteration, reduce the total node count `n` by the size of the queue `q.size()` [all these nodes have only one connecting edge].
