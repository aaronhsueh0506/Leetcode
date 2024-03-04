## Problem Description

Given a string `s` and an integer `k`, return the length of the longest substring of `s` that contains at most `k` distinct characters.

#### Example 1:
```plaintext
Input: s = "eceba", k = 2
Output: 3
Explanation: The substring is "ece" with length 3.
```

#### Example 2:
```plaintext
Input: s = "aa", k = 1
Output: 2
Explanation: The substring is "aa" with length 2.
```

## Constraints

- `1 <= s.length <= 5 * 10^4`
- `0 <= k <= 50`

## Concept
1. Sliding window problem
2. Using hash table to record each word and update res by `i-left+1`
