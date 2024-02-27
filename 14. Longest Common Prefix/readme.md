## Problem Description

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.


#### Example 1:
```plaintext
Input: strs = ["flower","flow","flight"]
Output: "fl"
```
#### Example 2:
```plaintext
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
```
## Constraints

- `1 <= strs.length <= 200`
- `0 <= strs[i].length <= 200`
- `strs[i]` consists of only lowercase English letters.

## Notes

- All given inputs are in lowercase letters `a-z`.

## Concept
Take each pair of words and choose the shorter length as the prefix to compare each character.
