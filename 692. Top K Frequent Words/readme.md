## Problem Description

Given an array of strings `words` and an integer `k`, return *the `k` most frequent strings*.

Return the answer **sorted** by **the frequency** from highest to lowest. Sort the words with the same frequency by their **lexicographical order**.

#### Example 1:
```plaintext
Input: words = ["i","love","leetcode","i","love","coding"], k = 2
Output: ["i","love"]
Explanation: "i" and "love" are the two most frequent words.
Note that "i" comes before "love" due to a lower alphabetical order.
```
#### Example 2:
```plaintext
Input: words = ["the","day","is","sunny","the","the","the","sunny","is","is"], k = 4
Output: ["the","is","sunny","day"]
Explanation: "the", "is", "sunny" and "day" are the four most frequent words,
with the number of occurrence being 4, 3, 2 and 1 respectively.
```
## Constraints
- `1 <= words.length <= 500`
- `1 <= words[i].length <= 10`
- `words[i]` consists of lowercase English letters.
- `k` is in the range `[1, The number of unique words[i]]`.
- All the words are **unique** except for the duplicates.

## Notes
- Try to solve this problem with `O(n log k)` time complexity.

## Concept
1. Use a hash table to record the frequency of each word.
2. Place the contents of the hash table into a max-heap, sorting entries with the same frequency lexicographically.
