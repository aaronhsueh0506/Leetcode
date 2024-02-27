## Problem Description

Implement `pow(x, n)`, which calculates `x` raised to the power `n` (i.e., `x^n`).

#### Example 1:
```plaintext
Input: x = 2.00000, n = 10
Output: 1024.00000
```
#### Example 2:
```plaintext
Input: x = 2.10000, n = 3
Output: 9.26100
```
#### Example 3:
```plaintext
Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2^-2 = 1/(2^2) = 1/4 = 0.25
```
## Constraints

- `-100.0 < x < 100.0`
- `-2^31 <= n <= 2^31-1`
- `n` is an integer.
- `-10^4 <= x^n <= 10^4`

## Concept
1. split the poewr by 2 until n in [-1,1]
2. if n==0 return 1 and recursive pow(x, n/2);   
3. if n==0 return res * res
4. if n==1 return res * res * x
5. if n==-1 return res * res / x
