## Problem Description

Convert a non-negative integer `num` to its English words representation.

#### Example 1:
```plaintext
Input: num = 123
Output: "One Hundred Twenty Three"
```
#### Example 2:
```plaintext
Input: num = 12345
Output: "Twelve Thousand Three Hundred Forty Five"
```
#### Example 3:
```plaintext
Input: num = 1234567
Output: "One Million Two Hundred Thirty Four Thousand Five Hundred Sixty Seven"
 ```

## Constraints

- 0 <= num <= 2^31 - 1

## Concept
1. 2^31 ~= 4*10^9, Billion is 10^9
2. Process each 3 bit and concate the res
