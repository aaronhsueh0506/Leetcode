## Problem Decsription

Given an integer `n`, return the number of trailing zeroes in `n!`.

Note that your solution should be in logarithmic time complexity.

#### Example 1:
```plaintext
Input: n = 3
Output: 0
Explanation: 3! = 6, no trailing zero.
```
#### Example 2:
```plaintext
Input: n = 5
Output: 1
Explanation: 5! = 120, one trailing zero.
```
#### Example 3:
```plaintext
Input: n = 0
Output: 0
```

## Constraints

- `0 <= n <= 10^4`

## Concept
1. A trailing zero is created by the multiplication of 2 and 5. However, there are typically more factors of 2 than factors of 5 in a factorial, so we only need to count the number of times 5 appears as a factor.
2. It's necessary to account for powers of 5 through division. For example, 25 is equal to 5^2 and contributes an additional factor of 5.
