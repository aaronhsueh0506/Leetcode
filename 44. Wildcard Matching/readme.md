## Problem Description

Given an input string (`s`) and a pattern (`p`), implement wildcard pattern matching with support for `'?'` and `'*'` where:

- `'?'` Matches any single character.
- `'*'` Matches any sequence of characters (including the empty sequence).

The matching should cover the **entire** input string (not partial).

#### Example 1:
```plaintext
Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".
```

#### Example 2:
```plaintext
Input: s = "aa", p = ""
Output: true
Explanation: '' matches any sequence.
```

#### Example 3:
```plaintext
Input: s = "cb", p = "?a"
Output: false
Explanation: '?' matches 'c', but the second letter is 'a', which does not match 'b'.
```

## Constraints

- `0 <= s.length, p.length <= 2000`
- `s` contains only lowercase English letters.
- `p` contains only lowercase English letters, `'?'`, and `'*'`.

## Concept
1. Use DP to record whether s[0 to i[ matches `p[0 to j]`
2. character `*` can represent zero or multiple characters. Set `dp[0][i] = dp[0][i-1]` for patterns like `'a*'` or `'.*'`.
3. If the characters are the same (`s[i-1] == p[j-1]`) or `p[j-1]=='?'`, check whether the last match was successful (`dp[i][j] = dp[i-1][j-1]`).
4. If `p[j-1]` is `*`, consider two cases:
   - Check if `*` represents zero occurrences of the preceding element (`dp[i][j-1]`).
   - Or, if `dp[i-1][j] `is `true`. `dp[i-1][j]` indicates whether removing one character from `s` still results in a match.
