## Problem Description

A **subsequence** of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., `"ace"` is a subsequence of `"abcde"` while `"aec"` is not).

Given two strings `source` and `target`, return the minimum number of subsequences of `source` such that their concatenation equals `target`. If the task is impossible, return `-1`.

 
#### Example 1:
```plaintext
Input: source = "abc", target = "abcbc"
Output: 2
Explanation: The target "abcbc" can be formed by "abc" and "bc", which are subsequences of source "abc".
```
#### Example 2:
```plaintext
Input: source = "abc", target = "acdbc"
Output: -1
Explanation: The target string cannot be constructed from the subsequences of source string due to the character "d" in target string.
```
#### Example 3:
```plaintext
Input: source = "xyz", target = "xzyxz"
Output: 3
Explanation: The target string can be constructed as follows "xz" + "y" + "xz".
 ```

## Constraints

- `1 <= source.length, target.length <= 1000`
- `source` and `target` consist of lowercase English letters.

## Concept
1. Set a pointer j for traversing target, and search for matching characters in source. If a matching character is found, increment j.
2. After each traversal of source, increment res by 1, indicating that source has been utilized once. If the value of j remains unchanged after a traversal (i.e., j is equal to pre), it indicates that no characters in source match target[j], leading to a return value of -1.

Time for O(m*n), Space for O(1)
