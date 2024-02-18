## Problem Description

Given a string `s`, find the length of the **longest substring** without repeating characters.


#### Example 1:

> Input: `s = "abcabcbb"`
>   
> Output: `3`
> 
> Explanation: The answer is "abc", with the length of 3.

#### Example 2:

>Input: `s = "bbbbb"`
>  
> Output: `1`
>
> Explanation: The answer is "b", with the length of 1.

#### Example 3:

> Input: `s = "pwwkew"`
>
> Output: `3`
>  
> Explanation: The answer could be "wke", with the length of 3. Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

### Constraints

- `0 <= s.length <= 5 * 10^4`
- `s` consists of English letters, digits, symbols, and spaces.

### Concepts
1. Set the left border to -1 and update the result every time.
2. If s[i] appears in the hash table and is greater than left, then update left to m[s[i]].
3. Update m[s[i]] to be the current index.
