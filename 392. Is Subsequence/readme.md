## Problem Decsription

Given two strings `s` and `t`, return `true` if `s` is a subsequence of `t`, or `false` otherwise.

A **subsequence** of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., `"ace"` is a subsequence of `"abcde"` while `"aec"` is not).


#### Example 1:
```plaintext
Input: s = "abc", t = "ahbgdc"
Output: true
```
#### Example 2:
```plaintext
Input: s = "axc", t = "ahbgdc"
Output: false
 ```

## Constraints

- `0 <= s.length <= 100`
- `0 <= t.length <= 10^4`
- `s` and `t` consist only of lowercase English letters.

## Concept
Solution 1: Recursive
Find s[0] in t, then continue with s[1:] and t[i+1:] in the next iteration until s is empty. Return true when s is empty; otherwise, return false.

Solution 2: Pointers
Using pointer pos, if s[pos] == t[i], increment pos by 1. Check if pos is equal to the length of s.
