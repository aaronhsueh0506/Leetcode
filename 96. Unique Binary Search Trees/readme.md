## Problem Description

Given an integer `n`, return *the number of structurally unique **BST's** (binary search trees) which has exactly `n` nodes of unique values from `1` to `n`*.

#### Example 1:

![Example 1](https://assets.leetcode.com/uploads/2021/01/18/uniquebstn3.jpg)
```plaintext
Input: n = 3
Output: 5
```

### Example 2:
```plaintext
Input: n = 1
Output: 1
```

## Constraints

- `1 <= n <= 19`

## Concept
1. Use DP to record the number of unique BST combinations for n nodes.
2. dp[i] += dp[j] * dp[i-j-1] for each i as the root, where the left subtree has j nodes and the right subtree has (i-j-1) nodes.
3. Initialize dp[0] and dp[1] to 1, as there is only one combination for a BST with 0 or 1 node. For dp[2], calculate as dp[0] * dp[1] + dp[1] * dp[0] to account for the combinations where the left subtree is empty and the right is not, and vice versa
 - left-root-null and null-root-right
