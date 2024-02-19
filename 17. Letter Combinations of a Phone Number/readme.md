## Description

Given a string containing digits from `2-9` inclusive, return all possible letter combinations that the number could represent. A mapping of digit to letters (just like on the telephone buttons) is given below. Note that `1` does not map to any letters.

#### Example 1:
> Input: `digits = "23"`
> 
> Output: `["ad","ae","af","bd","be","bf","cd","ce","cf"]`

#### Example 2:
> Input: `digits = ""`
> 
> Output: `[]`

#### Example 3:
> Input: `digits = "2"`
> 
> Output: `["a","b","c"]`

## Constraints:

- `0 <= digits.length <= 4`
- `digits[i]` is a digit in the range `['2', '9']`.

## Notes

- Consider using a recursive approach or iterative approach with a queue to generate all possible combinations.
- Think about how to handle cases when the input is empty or contains a single digit.

## Concepts:
1. Create a vector mapping phone numbers to strings.
2. Initialize res as an empty string, then for each element in res, add a character from the string.
