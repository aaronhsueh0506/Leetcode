## Problem Description

Given a string `s` which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, `"Aa"` is not considered a palindrome here.

#### Example 1:
> Input: s = "abccccdd"
> 
> Output: 7
>
> Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.

#### Example 2:
> Input: s = "a"
> 
> Output: 1
>
> Explanation: The longest palindrome that can be built is "a", whose length is 1.

## Constraints

- `1 <= s.length <= 2000`
- `s` consists of lowercase **and/or** uppercase English letters only.

## Concept
1. Any combination is acceptable, so characters that appear an even number of times are beneficial.
2. If the entire word's length is not the same as the result, one character can be used as the center for the palindrome.
