
## Description

Given a signed 32-bit integer `x`, return `x` with its digits reversed. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-2^31, 2^31 - 1]`, then return `0`.

#### Example 1:
```plaintext
Input: `x = 123`
Output: `321`
```
#### Example 2:
```plaintext
Input: `x = -123`
Output: `-321`
```
#### Example 3:
```plaintext
Input: `x = 120`
Output: `21`
```
#### Example 4:
```plaintext
Input: `x = 0`
Output: `0`
```
## Constraints

- `-2^31 <= x <= 2^31 -

## Concepts
1. Multiply res by 10 and add x modulo 10.
2. Divide x by 10.
3. Check if res is greater than INT_MAX / 10, or if res is equal to INT_MAX / 10 and x modulo 10 is greater than INT_MAX modulo 10. If true, it will overflow.
