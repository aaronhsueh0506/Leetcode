## Problem Description

You are given a positive integer `n`, you can do the following operation any number of times:

- Add or subtract a **power** of `2` from `n`.
Return the **minimum** number of operations to make `n` equal to `0`.

A number `x` is power of `2` if `x == 2^i` where `i >= 0`.

 
#### Example 1:
```plaintext
Input: n = 39
Output: 3
Explanation: We can do the following operations:
- Add 20 = 1 to n, so now n = 40.
- Subtract 23 = 8 from n, so now n = 32.
- Subtract 25 = 32 from n, so now n = 0.
It can be shown that 3 is the minimum number of operations we need to make n equal to 0.
```
#### Example 2:
```plaintext
Input: n = 54
Output: 3
Explanation: We can do the following operations:
- Add 21 = 2 to n, so now n = 56.
- Add 23 = 8 to n, so now n = 64.
- Subtract 26 = 64 from n, so now n = 0.
So the minimum number of operations is 3.
 ```

## Constraints

- `1 <= n <= 10^5`

## Concept
Strategy:
  - For consecutive 1s, add 1 (i.e., 2^0) because, with consecutive 1s, adding 1 and then subtracting will result in fewer or equal operations compared to directly subtracting 1.
  - For a single 1, subtract 1 (i.e., 2^0).
  - Use >> 1 to divide by 2.
