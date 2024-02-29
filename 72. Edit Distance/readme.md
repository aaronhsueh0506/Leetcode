## Problem Description

Given two strings `word1` and `word2`, return the minimum number of operations required to convert `word1` to `word2`.

You have the following three operations permitted on a word:

- Insert a character
- Delete a character
- Replace a character

#### Example 1:
```plaintext
Input: word1 = "horse", word2 = "ros"
Output: 3
Explanation:
horse -> rorse (replace 'h' with 'r')
rorse -> rose (remove 'r')
rose -> ros (remove 'e')
```

#### Example 2:
```plaintext
Input: word1 = "intention", word2 = "execution"
Output: 5
Explanation:
intention -> inention (remove 't')
inention -> enention (replace 'i' with 'e')
enention -> exention (replace 'n' with 'x')
exention -> exection (replace 'n' with 'c')
exection -> execution (insert 'u')
```

## Constraints

- `0 <= word1.length, word2.length <= 500`
- `word1` and `word2` consist of lowercase English letters.

## Concept
1. Create a DP (dynamic programming) matrix to record how many steps are needed for word1.substr(0, i) and word2.substr(0, j) to become the same word.
2. If word1[i] == word2[j], it means no operation is needed at this position. Therefore, set dp[i][j] to dp[i-1][j-1] (the steps required before index i and index j).
3. If word1[i] != word2[j], an operation is required, so add 1 to the step count. Find the minimum value among dp[i-1][j-1], dp[i-1][j], and dp[i][j-1]. These three indices represent the costs of replace, insert, and delete operations, respectively.
