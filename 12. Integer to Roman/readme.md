## Problem Description

Roman numerals are represented by seven different symbols: `I`, `V`, `X`, `L`, `C`, `D` and `M`.

```plaintext
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
Given an integer, convert it to a roman numeral.
```

#### Example 1:
```plaintext
Input: num = 3
Output: "III"
```
#### Example 2:
```plaintext
Input: num = 4
Output: "IV"
```
#### Example 3:
```plaintext
Input: num = 9
Output: "IX"
```
#### Example 4:
```plaintext
Input: num = 58
Output: "LVIII"
Explanation: L = 50, V = 5, III = 3.
```
#### Example 5:
```plaintext
Input: num = 1994
Output: "MCMXCIV"
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
```

## Constraints
- 1 <= num <= 3999

## Concept
1. Process from left to right
2. Rule
   - 4 becomes 1 + 5 => (4 * 10^i = 10^i + 5 * 10^i) 
   - 9 becomes 1 + 10 => (9 * 10^i = 10^i + 10 * 10^i)
   - 1~3, 6~8 (V) + for-loop (I)
   - 5 -> (V)
   - 0 -> skip
