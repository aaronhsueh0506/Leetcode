## Problem Description

A boolean expression is an expression that evaluates to either `true` or `false`. It can be in one of the following shapes:

* `'t'` that evaluates to `true`.
* `'f'` that evaluates to `false`.
* `'!(subExpr)'` that evaluates to the logical NOT of the inner expression `subExpr`.
* `'&(subExpr1, subExpr2, ..., subExprn)'` that evaluates to the logical AND of the inner expressions `subExpr1, subExpr2, ..., subExprn` where `n >= 1`.
* `'|(subExpr1, subExpr2, ..., subExprn)'` that evaluates to the logical OR of the inner expressions `subExpr1, subExpr2, ..., subExprn` where `n >= 1`.
Given a string `expression` that represents a **boolean expression**, return the evaluation of that expression.

It is **guaranteed** that the given expression is valid and follows the given rules.

Example 1:
```plaintext
Input: expression = "&(|(f))"
Output: false
Explanation: 
First, evaluate |(f) --> f. The expression is now "&(f)".
Then, evaluate &(f) --> f. The expression is now "f".
Finally, return false.
```
Example 2:
```plaintext
Input: expression = "|(f,f,f,t)"
Output: true
Explanation: The evaluation of (false OR false OR false OR true) is true.
```
Example 3:
```plaintext
Input: expression = "!(&(f,t))"
Output: true
Explanation: 
First, evaluate &(f,t) --> (false AND true) --> false --> f. The expression is now "!(f)".
Then, evaluate !(f) --> NOT false --> true. We return true.
 ```

## Constraints

- `1 <= expression.length <= 2 * 10^4`
- `expression[i]` is one following characters: `'('`, `')'`, `'&'`, `'|'`, `'!'`, `'t'`, `'f'`, and `','`.

## Concept
1. Using a stack to record characters except for commas (,).
2. Upon encountering a closing parenthesis ')', pop characters from the stack and put them in a hash set until the top of the stack is a opening parenthesis '('.
3. Obtain the operator (&, |, !) from the top of the stack. If the operator is '&', check if 'f' is in the hash set. If the operator is '|', check if 't' is in the hash set.
4. Push the answer back into the stack for potential use in the next parentheses.
5. Return the top of the stack.
