## Problem Description

Given a string `s` representing a valid expression, implement a basic calculator to evaluate it, and return the result of the evaluation.

**Note:** You are not allowed to use any built-in library function such as `eval`.

#### Example 1:
```plaintext
Input: s = "1 + 1"
Output: 2
```
#### Example 2:
```plaintext
Input: s = " 2-1 + 2 "
Output: 3
```
#### Example 3:
```plaintext
Input: s = "(1+(4+5+2)-3)+(6+8)"
Output: 23
```
## Constraints

- `1 <= s.length <= 3 * 10^5`
- `s` consists of digits, `'+'`, `'-'`, `'('`, `')'`, and `' '`.
- `s` represents a valid expression.
- `'+'` is not used as a unary operation.
- `'-'` could be used as a unary operation but it has to be inside parentheses.
- There will be no two consecutive operators in the input.
- Every number and running calculation will fit in a signed 32-bit integer.

## Explanation

Your task is to implement a basic calculator for evaluating arithmetic expressions containing non-negative integers, addition, subtraction, and parentheses.

## Concept
1. The expression contains only +, -, (, ), and numbers.
2. Upon encountering (, push the current number and sign onto the stack before the (.
3. Upon encountering ), complete the computation within the parentheses, utilizing stack_num and stack_op for the temporary result.
4. Continue computation with the current sign and number, especially when the expression does not end with ).
