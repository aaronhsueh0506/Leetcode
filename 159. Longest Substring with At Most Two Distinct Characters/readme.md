## Problem Description

Given a string `s`, return the length of the longest substring that contains at most **two distinct characters**.

#### Example 1:
```plaintext
Input: s = "eceba"
Output: 3
Explanation: The substring is "ece" which its length is 3.
```
#### Example 2:
```plaintext
Input: s = "ccaabbb"
Output: 5
Explanation: The substring is "aabbb" which its length is 5.
```

## Constraints

- `1 <= s.length <= 10^5`
- `s` consists of English letters.

## Concept
1. Sliding window problem
2. Using hash table to record each word and update res by i-left+1
