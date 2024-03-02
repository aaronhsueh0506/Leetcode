## Problem Description

Calculate the sum of two integers `a` and `b`, but you are not allowed to use the operator + and -.

#### Example 1:
```plaintext
Input: a = 1, b = 2
Output: 3
```
#### Example 2:
```plaintext
Input: a = -2, b = 3
Output: 1
```

## Constraints
- `-1000 <= a, b <= 1000`

## Concept
Use XOR calculate carry part and update to b, until b equals to 0.
