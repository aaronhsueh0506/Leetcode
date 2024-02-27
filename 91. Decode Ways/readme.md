## Problem Description

A message containing letters from `A-Z` is being encoded to numbers using the following mapping:

'A' -> 1
'B' -> 2
...
'Z' -> 26

Given a string `s` containing only digits, return *the number of ways to decode it*.

#### Example 1:

> Input: s = "12"
> 
> Output: 2
> 
> Explanation: It could be decoded as "AB" (1 2) or "L" (12).

#### Example 2:

> Input: s = "226"
>
>  Output: 3
>
> Explanation: It could be decoded as "BZ" (2 26), "VF" (22 6), or "BBF" (2 2 6).

#### Example 3:

> Input: s = "0"
>
> Output: 0
>
> Explanation: There is no way to decode a string that starts with a zero.

#### Example 4:

> Input: s = "06"
>
> Output: 0
>
> Explanation: "06" cannot be mapped to "F" since "6" is different from "06".

## Constraints:

- `1 <= s.length <= 100`
- `s` contains only digits and may contain leading zero(s).

## Concept
1. Use dp to record how many combinations there are
2. Avoid leading 0, if s[i-1]!=0, dp[i] += dp[i-1] (get the same combination)
3. If s[i-2] and s[i-1] in [10,26] are combined together, then dp[i] += dp[i-2] (add combinations before these two char)
