## Problem Description

Given a string `s`, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

#### Example 1:
```plaintext
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
```
#### Example 2:
```plaintext
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
```
## Constraints

- `1 <= s.length <= 2 * 10^5`
- `s` consists only of printable ASCII characters.

## Notes

- For the purpose of this problem, we define empty strings as valid palindromes.
- Consider using a two-pointer technique to check for palindromes.

## Concept
1. To determine if a character is valid and the string is a palindrome, use two pointers to check if the characters are the same.
2. A function is needed to check if a character is valid.
