## Problem Description

Given an array of strings `strs`, group the anagrams together. You can return the answer in **any order**.

An **Anagram** is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

#### Example 1:
```plaintext
Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
```
#### Example 2:
```plaintext
Input: strs = [""]
Output: [[""]]
```
#### Example 3:
```plaintext
Input: strs = ["a"]
Output: [["a"]]
```
## Constraints

- `1 <= strs.length <= 10^4`
- `0 <= strs[i].length <= 100`
- `strs[i]` consists of lowercase English letters.

## Concept
1. Use a hash table to record the number of each group.
2. Sort the string to determine if it belongs to the same group. If it's a new group, create an entry for the new group.
