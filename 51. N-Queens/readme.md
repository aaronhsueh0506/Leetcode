## Problem Decsription

The **n-queens puzzle** is the problem of placing `n` queens on an `n×n` chessboard such that no two queens attack each other.

Given an integer `n`, return all distinct solutions to the **n-queens puzzle**. Each solution contains a distinct board configuration of the n-queens' placement, where `'Q'` and `'.'` both indicate a queen and an empty space, respectively.

#### Example 1:
```plaintext
Input: n = 4
Output:
[[".Q..", // Solution 1
"...Q",
"Q...",
"..Q."],

["..Q.", // Solution 2
"Q...",
"...Q",
".Q.."]]
Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above.
```

#### Example 2:
```plaintext
Input: n = 1
Output: [["Q"]]
```

## Constraints

- `1 <= n <= 9`

## Concept
1. Since there may be multiple solutions, each solution is represented as a vector<string> queens(n, string(n, '.')), which is an n*n string board.
2. Check the left and right diagonals, as well as the column above the current row, to ensure no queens attack each other.
