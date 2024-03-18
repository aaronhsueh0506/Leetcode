## Problem Decsription

In a string composed of `'L'`, `'R'`, and `'X'` characters, like `"RXXLRXRXL"`, a move consists of either replacing one occurrence of `"XL"` with `"LX"`, or replacing one occurrence of `"RX"` with `"XR"`. Given the starting string `start` and the ending string `end`, return `True` if and only if there exists a sequence of moves to transform one string to the other.

#### Example 1:
```plaintext
Input: start = "RXXLRXRXL", end = "XRLXXRRLX"
Output: true
Explanation: We can transform start to end following these steps:
RXXLRXRXL ->
XRXLRXRXL ->
XRLXRXRXL ->
XRLXXRRXL ->
XRLXXRRLX
```
#### Example 2:
```plaintext
Input: start = "X", end = "L"
Output: false
``` 

## Constraints

- `1 <= start.length <= 10^4`
- `start.length == end.length`
- Both `start` and `end` will only consist of characters in `'L'`, `'R'`, and `'X'`.

## Concept
1. The numbers of 'X', 'L', and 'R' must be the same.
2. For transformations like "XL" to "LX", if the index of 'X' in the start string is larger than the index in the end string, it is invalid. Similarly, for transformations like "RX" to "XR".
3. Skip all occurrences of "X" and then check the indices.
4. When one of the variables reaches the end of the string, check if the other variable has 'L' or 'R' (check the count).
