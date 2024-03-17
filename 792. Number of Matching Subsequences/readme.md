## Problem Description

Given a string `s` and an array of strings `words`, return the number of `words[i]` that is a subsequence of `s`.

A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

For example, `"ace"` is a subsequence of `"abcde"`.
 

#### Example 1:
```plaintext
Input: s = "abcde", words = ["a","bb","acd","ace"]
Output: 3
Explanation: There are three strings in words that are a subsequence of s: "a", "acd", "ace".
```
#### Example 2:
```plaintext
Input: s = "dsahjpjauf", words = ["ahjpjau","ja","ahbwzgqnuk","tnmlanowax"]
Output: 2
 ```

## Constraints

- `1 <= s.length <= 5 * 10^4`
- `1 <= words.length <= 5000`
- `1 <= words[i].length <= 50`
- `s` and `words[i]` consist of only lowercase English letters.

## Concept
Solution 1: Brute force
- Iterate over each character of the words and compare it to s starting from the previous index. If the character cannot be found, it means this word cannot match.
- Hash table to record this word is fail or not. (provide same prefix)

Solution 2: Binary search

- Record the index of each character in s.
- Use upper_bound to find the next position of this character after the previous index. (Upper_bound for a vector is obtained using upper_bound(v.begin(), v.end(), val)).
- Hash table to record this word and its splits are fail or not. (provide double counting)
