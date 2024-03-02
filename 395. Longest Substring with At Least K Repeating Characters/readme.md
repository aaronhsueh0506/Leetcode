## Problem Description

Given a string `s` and an integer `k`, return the length of the longest substring of `s` such that the frequency of each character in this substring is greater than or equal to `k`.

Example 1:
```plaintext
Input: s = "aaabb", k = 3
Output: 3
Explanation: The longest substring is "aaa", as 'a' is repeated 3 times.
```
Example 2:
```plaintext
Input: s = "ababbc", k = 2
Output: 5
Explanation: The longest substring is "ababb", as 'a' is repeated 2 times and 'b' is repeated 3 times.
```

## Constraints

- `1 <= s.length <= 10^4`
- `s` consists of only lowercase English letters.
- `1 <= k <= 10^5`

## Concept
1. Use recursion to handle different parts of `s`.
2. If all characters occur at least `k` times, return s.size() (when the `flag` is true).
3. If a character occurs fewer than `k` times, update the result using the substring from `start` to `i-1`.
4. It's necessary to check from `start` to end again, as while the `flag` might be `false`, there could be sections from `start` to `n-1` that haven't been checked.
