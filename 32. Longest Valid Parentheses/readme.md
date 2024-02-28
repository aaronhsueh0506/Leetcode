## Problem Description

Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.

### Example 1:
```plaintext
Input: s = "(()"
Output: 2
Explanation: The longest valid parentheses substring is "()".
```

### Example 2:
```plaintext
Input: s = ")()())"
Output: 4
Explanation: The longest valid parentheses substring is "()()".
```
### Example 3:
```plaintext
Input: s = ""
Output: 0
```

## Constraints

- `0 <= s.length <= 3 * 10^4`
- `s[i]` is '(', or ')'.

## Concept
1. Use a stack to push the index if s[i] is (.
2. When encountering ):
    - If the stack is empty, it means it cannot form a pair of parentheses, so update the left boundary.
    - If it can form a pair of parentheses, pop an index from the stack and calculate the length:
        * If the stack is empty afterward, return i - leftBoundary.
        * Otherwise, return i - st.top() because there might be a valid pair of parentheses before st.top(), and we need to find the position before which it cannot be a pair of parentheses.
