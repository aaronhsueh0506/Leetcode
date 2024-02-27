## Problem Description

Given a string `s`, partition `s` such that every substring of the partition is a palindrome. Return all possible palindrome partitioning of `s`.

A palindrome string is a string that reads the same backward as forward.

#### Example 1:
```plaintext
Input: s = "aab"
Output: [["a","a","b"],["aa","b"]]

Explanation: There are two possible partitionings, ["a", "a", "b"] and ["aa", "b"], both of which contain only palindrome strings.
```
#### Example 2:
```plaintext
Input: s = "a"
Output: [["a"]]

Explanation: There is only one way to partition "a" since it is by itself a palindrome.
```
## Constraints

- `1 <= s.length <= 16`
- `s` contains only lowercase English letters.
