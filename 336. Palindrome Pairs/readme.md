## Problem Description

Given a list of **unique** words, return all the pairs of the **distinct** indices `(i, j)` in the given list, so that the concatenation of the two words `words[i] + words[j]` is a palindrome.

#### Example 1:
```plaintext
Input: words = ["abcd","dcba","lls","s","sssll"]
Output: [[0,1],[1,0],[3,2],[2,4]]
Explanation: The palindromes are ["dcbaabcd","abcddcba","slls","llssssll"]
```

#### Example 2:
```plaintext
Input: words = ["bat","tab","cat"]
Output: [[0,1],[1,0]]
Explanation: The palindromes are ["battab","tabbat"]
```

#### Example 3:
```plaintext
Input: words = ["a",""]
Output: [[0,1],[1,0]]
```

## Constraints

- `1 <= words.length <= 5000`
- `0 <= words[i].length <= 300`
- `words[i]` consists of lowercase English letters.

## Concept
1. Use a hash table to map each word to its index.
2. Find the substring in words, from index l to index r, and reverse it. If it matches one of the entries in the hash table, check if the other words are palindromes.
3. If l == 0, it means the word is on the left side, and the other parts are on the right side.
4. To avoid pairing a word with itself as a palindrome, ensure that m[t] != i where m is the mapping from words to indices, t is the target word, and i is the current index.
