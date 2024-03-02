## Problem Description

The string `"PAYPALISHIRING"` is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)
```plaintext
P   A   H   N
A P L S I I G
Y   I   R
```

And then read line by line: `"PAHNAPLSIIGYIR"`

Write the code that will take a string and make this conversion given a number of rows:
```plaintext
string convert(string s, int numRows);
```
#### Example 1:
```plaintext
Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
```

## Example 2:
```plaintext
Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I
```

## Example 3:
```plaintext
Input: s = "A", numRows = 1
Output: "A"
```

## Constraints

- `1 <= s.length <= 1000`
- `s` consists of English letters (lower-case and upper-case), `','` and `'.'`.
- `1 <= numRows <= 1000`

## Concept
1. Calculate the index difference between the first and last rows.
2. Rows between the first and last are assigned left and right indices. The sum of the left and right indices equals the index difference. Use a `flag` to determine whether it's the left or right index.
