## Problem Description

Implement the `atoi` function which converts a string to an integer. The function first discards as many whitespace characters as necessary until the first non-whitespace character is found. Then, starting from this character, takes an optional initial plus or minus sign followed by as many numerical digits as possible, and interprets them as a numerical value.

The string can contain additional characters after those that form the integral number, which are ignored and have no effect on the behavior of this function.

If the first sequence of non-whitespace characters in `str` is not a valid integral number, or if no such sequence exists because either `str` is empty or it contains only whitespace characters, no conversion is performed.

If no valid conversion could be performed, a zero value is returned.



#### Example 1:
```plaintext
Input: `str = "42"`
Output: `42`
```
#### Example 2:
```plaintext
Input: `str = "   -42"`
Output: `-42`
```
#### Example 3:
```plaintext
Input: `str = "4193 with words"`
Output: `4193`
```
#### Example 4:
```plaintext
Input: `str = "words and 987"`
Output: `0`
```
#### Example 5:
```plaintext
Input: `str = "-91283472332"`
Output: `-2147483648` (Explanation: The number "-91283472332" is out of the range of a 32-bit signed integer. Thefore INT_MIN (`-2^31`) is returned.)
```
## Constraints:

- `0 <= str.length <= 200`
- `str` consists of English letters (lower-case and upper-case), digits (`0-9`), `' '`, `'+'`, `'-'`, and `'.'`.

## Notes

- Only the space character `' '` is considered as whitespace character.
- Do not ignore any characters other than the leading whitespace or the rest of the string after the digits.

## Concepts:
1. ignore leading space
2. if the first elemnt is '+' or '-', re-assign the sign(initize as 1, positive)
3. Multiply res by 10, and check for overflow issue
4. return 'sign*res'
