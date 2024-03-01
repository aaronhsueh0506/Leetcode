## Problem Description

You are given a network of `n` nodes, labeled from `1` to `n`. You are also given `times`, a list of travel times as directed edges `times[i] = (ui, vi, wi)`, where `ui` is the source node, `vi` is the target node, and `wi` is the time it takes for a signal to travel from source to target.

We will send a signal from a given node `k`. Return the minimum time it takes for all the `n` nodes to receive the signal. If it is impossible for all the `n` nodes to receive the signal, return `-1`.

## Example 1:

![Example 1](https://assets.leetcode.com/uploads/2019/05/23/931_example_1.png)
```plaintext
Input: times = [[2,1,1],[2,3,1],[3,4,1]], n = 4, k = 2
Output: 2
```

## Example 2:
```plaintext
Input: times = [[1,2,1]], n = 2, k = 1
Output: 1
```

## Example 3:
```plaintext
Input: times = [[1,2,1]], n = 2, k = 2
Output: -1
```

## Constraints

- `1 <= k <= n <= 100`
- `1 <= times.length <= 6000`
- `times[i].length == 3`
- `1 <= u, v <= n`
- `u != v`
- `0 <= w <= 100`
- All the pairs `(u, v)` are unique. (i.e., no multiple edges.)

## Concept
1. Use Dijkstra's algorithm.
2. dist records the cost to reach each node.
3. Implement DFS with a heap.
4. Check all values in dist; if any value is INT_MAX, it means this node cannot be reached.
