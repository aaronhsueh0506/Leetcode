## Problem Decsription

Implement a basic calculator to evaluate a simple expression string.

The expression string contains only non-negative integers, `'+'`, `'-'`, `'*'`, `'/'` operators, and open `'('` and closing parentheses `')'`. The integer division should truncate toward zero.

You may assume that the given expression is always valid. All intermediate results will be in the range of `[-2^31, 2^31 - 1]`.

Note: You are not allowed to use any built-in function which evaluates strings as mathematical expressions, such as `eval()`.

#### Example 1:
```plaintext
Input: s = "1+1"
Output: 2
```
#### Example 2:
```plaintext
Input: s = "6-4/2"
Output: 4
```
#### Example 3:
```plaintext
Input: s = "2*(5+5*2)/3+(6/2+8)"
Output: 21
```

## Constraints:

- `1 <= s <= 10^4`
- `s` consists of digits, `'+'`, `'-'`, `'*'`, `'/'`, `'('`, and `')'`.
- `s` is a valid expression.

## Concept
1. Use long data type for res, cur, and num to handle 32-bit operations.
2. Accumulate num for the current number. Use cur for the current number with an operation. If s[i] is + or -, push to res because cur will not change. If s[i] is one of the operations +, -, *, /, perform the last operation on cur.
3. If parentheses () are encountered, recursively process the string between the parentheses.
