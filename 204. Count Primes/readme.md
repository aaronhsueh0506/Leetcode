## Problem Decsription

Given an integer `n`, return the number of prime numbers that are strictly less than `n`.

#### Example 1:
```plaintext
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
```
#### Example 2:
```plaintext
Input: n = 0
Output: 0
```
#### Example 3:
```plaintext
Input: n = 1
Output: 0
```

## Constraints:

- `0 <= n <= 5 * 10^6`

## Concept
1. Create a boolean vector of size n to track prime numbers from 0 to n-1. Since the question asks for the primes less than n, when n equals 2, the function should return 0.
2. To identify primes, it is sufficient to check numbers up to sqrt(n). Mark all multiples of each prime as false in the vector.
