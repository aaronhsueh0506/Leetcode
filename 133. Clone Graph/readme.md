## Problem Decsription

Given a reference of a node in a **connected** undirected graph, return a [deep copy](https://en.wikipedia.org/wiki/Object_copying#Deep_copy) (clone) of the graph. Each node in the graph contains a `val` (int) and a list (`List[Node]`) of its `neighbors`.

```plaintext
class Node {
public int val;
public List<Node> neighbors;
public Node() {
val = 0;
neighbors = new ArrayList<Node>();
}
public Node(int _val) {
val = _val;
neighbors = new ArrayList<Node>();
}
public Node(int _val, ArrayList<Node> _neighbors) {
val = _val;
neighbors = _neighbors;
}
}
```

**Test case format:

For simplicity, each node's value is the same as the node's index (1-indexed). For example, the first node with `val = 1` might be the only node in the graph. The graph is represented in the test case using an adjacency list.

An adjacency list is a collection of unordered lists used to represent a finite graph. Each list describes the set of neighbors of a node in the graph.

The given node will always be the first node with `val = 1`. You must return the **copy of the given node** as a reference to the cloned graph.

#### Example 1:

![Example 1](https://assets.leetcode.com/uploads/2019/11/04/133_clone_graph_question.png)
```plaintext
Input: adjList = [[2,4],[1,3],[2,4],[1,3]]
Output: [[2,4],[1,3],[2,4],[1,3]]
Explanation: There are 4 nodes in the graph.
1st node (val = 1) neighbors = [2, 4].
2nd node (val = 2) neighbors = [1, 3].
3rd node (val = 3) neighbors = [2, 4].
4th node (val = 4) neighbors = [1, 3].
The graph looks the same as in the above figure.
```

#### Example 2:
```plaintext
Input: adjList = [[]]
Output: [[]]
Explanation: This an empty graph, it does not have any nodes.
```

#### Example 3:
```plaintext
Input: adjList = []
Output: []
Explanation: This a graph with no nodes and no edges.
```

## Constraints:

- The number of nodes in the graph is in the range `[0, 100]`.
- `1 <= Node.val <= 100`
- `Node.val` is unique for each node.
- There are no repeated edges and no self-loops in the graph.
- The Graph is connected and all nodes can be visited starting from the given node.

## Concept
1. Use a hash table to record the original and clone addresses.
2. Iterate through the neighbors of the original node and pass them to DFS to create a new node.
