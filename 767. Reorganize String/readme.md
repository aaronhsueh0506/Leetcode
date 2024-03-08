## Problem Description

Given a string `s`, rearrange the characters of `s` so that any two adjacent characters are not the same.

Return any possible rearrangement of `s` or return `""` if not possible.


#### Example 1:
```plaintext
Input: s = "aab"
Output: "aba"
```
#### Example 2:
```plaintext
Input: s = "aaab"
Output: ""
 ```

## Constraints

- `1 <= s.length <= 500`
- `s` consists of lowercase English letters.

## Concept
1. Count the occurrences of each character. If the maximum count is greater than (n + 1) / 2, it implies that there must be at least two adjacent identical characters, which is not permissible.
2. Select the two most frequent characters and add them to the result alternately until the queue's size is less than 2.
3. The last iteration will have only one character left with a single occurrence (since max_count <= (n + 1) / 2).
