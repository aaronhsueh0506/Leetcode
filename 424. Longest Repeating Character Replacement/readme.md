## Problem Description

Given a string `s` and an integer `k`, return *the length of the longest substring containing the same letter you can get after performing at most `k` character replacements*.

#### Example 1:
```plaintext
Input: s = "ABAB", k = 2
Output: 4
Explanation: Replace the two 'A's with two 'B's or vice versa.
```
#### Example 2:
```plaintext
Input: s = "AABABBA", k = 1
Output: 4
Explanation: Replace the one 'A' in the middle with 'B' and form "AABBBBA".
The substring "BBBB" has the longest repeating letters, which is 4.
```
## Constraints

- `1 <= s.length <= 10^5`
- `s` consists of only uppercase English letters.
- `0 <= k <= s.length`

## Concept
1. Update the maximum number count. If the current index minus the maximum count of a single character is greater than k, it means we need to move the left boundary to the right.
