## Problem Decsription

Given a `rows x cols` screen and a `sentence` represented as a list of strings, return the number of times the given sentence can be fitted on the screen.

The order of words in the sentence must remain unchanged, and a word cannot be split into two lines. A single space must separate two consecutive words in a line.


#### Example 1:
```plaintext
Input: sentence = ["hello","world"], rows = 2, cols = 8
Output: 1
Explanation:
hello---
world---
The character '-' signifies an empty space on the screen.
```
#### Example 2:
```plaintext
Input: sentence = ["a", "bcd", "e"], rows = 3, cols = 6
Output: 2
Explanation:
a-bcd- 
e-a---
bcd-e-
The character '-' signifies an empty space on the screen.
```
#### Example 3:
```plaintext
Input: sentence = ["i","had","apple","pie"], rows = 4, cols = 5
Output: 1
Explanation:
i-had
apple
pie-i
had--
The character '-' signifies an empty space on the screen.
```

## Constraints

- `1 <= sentence.length <= 100`
- `1 <= sentence[i].length <= 10`
- `sentence[i]` consists of lowercase English letters.
- `1 <= rows, cols <= 2 * 10^4`

## Concept
1. Concatenate all sentences and calculate the total length as `len`.
2. Use a variable `start` to represent the index at which the screen is filled.
3. For each row, increment start by `cols` and check whether the last character is a space or not.
 - If the last character is not a space, it means this index is within a word. Decrement start until `start-1` is a space. (`start` will then be the first character of the next word.)
 - If the last character is a space, increment start by `1`. (`start` will then be the first character of the next word.)
