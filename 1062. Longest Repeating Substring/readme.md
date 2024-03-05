## Problem Description

Given a string `s`, return the length of the longest repeating substrings. If no repeating substring exists, return `0`.

Example 1:
```plaintext
Input: s = "abcd"
Output: 0
Explanation: There is no repeating substring.
```
Example 2:
```plaintext
Input: s = "abbaba"
Output: 2
Explanation: The longest repeating substrings are "ab" and "ba", each of which occurs twice.
```
Example 3:
```plaintext
Input: s = "aabcaabdaab"
Output: 3
Explanation: The longest repeating substring is "aab", which occurs 3 times.
```

## Constraints

- `1 <= s.length <= 2000`
- `s` consists of lowercase English letters.

## Concept
1. Use dynamic programming (DP) to record how many times each word repeats.
2. Use two nested for-loops. If 's[i]' is equal to 's[j]', find 'dp[i-1][j-1] + 1' (where 'i' must be greater than or equal to 1).
