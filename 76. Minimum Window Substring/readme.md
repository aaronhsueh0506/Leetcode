## Problem Description

Given two strings `s` and `t` of lengths `m` and `n` respectively, return the *minimum window substring* of `s` such that every character in `t` (**including duplicates**) is included in the window. If there is no such substring, return the empty string `""`.

The testcases will be generated such that the answer is **unique**.

A **substring** is a contiguous sequence of characters within the string.

#### Example 1:
```plaintext
Input: s = "ADOBECODEBANC", t = "ABC"
Output: "BANC"
Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.
```
#### Example 2:
```plaintext
Input: s = "a", t = "a"
Output: "a"
Explanation: The entire string s is the minimum window.
```
#### Example 3:
```plaintext
Input: s = "a", t = "aa"
Output: ""
Explanation: Both 'a's from t must be included in the window.
Since the largest window of s only has one 'a', return empty string.
```
## Constraints

- `1 <= m, n <= 10^5`
- `s` and `t` consist of uppercase and lowercase English letters.

**Follow up**: Could you find an algorithm that runs in `O(m + n)` time?

## Concept
1. Use a vector to count the number of occurrences of each character in t.
2. If (--count[s[i]] >= 0), it means s[i] is in t. Increment cnt until cnt == t.size().
3. Update len and start, and reduce the left boundary until cnt != t.size().
