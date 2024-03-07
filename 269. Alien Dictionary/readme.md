There is a new alien language that uses the English alphabet. However, the order of the letters is unknown to you.

You are given a list of strings `words` from the alien language's dictionary. Now it is claimed that the strings in `words` are sorted lexicographically by the rules of this new language.

If this claim is incorrect, and the given arrangement of string in `words` cannot correspond to any order of letters, return `""`.

Otherwise, return a string of the unique letters in the new alien language sorted in lexicographically increasing order by the new language's rules. If there are multiple solutions, return any of them.

 

#### Example 1:
```plaintext
Input: words = ["wrt","wrf","er","ett","rftt"]
Output: "wertf"
```
#### Example 2:
```plaintext
Input: words = ["z","x"]
Output: "zx"
```
#### Example 3:
```plaintext
Input: words = ["z","x","z"]
Output: ""
Explanation: The order is invalid, so return "".
```

## Constraints

- `1 <= words.length <= 100`
- `1 <= words[i].length <= 100`
- `words[i]` consists of only lowercase English letters.

## Concept
1. Given that the `words` are sorted lexicographically, we can create pairs to record the first differing character at the same index between consecutive `words`.
2. Count the incoming edges for each character based on these pairs. If a character's count is `0`, it means it can be placed at the start without violating the order and can be added to the queue initially.
3. Perform BFS: dequeue and process characters, for each outgoing edge from the first character to the second in the pair, decrement the edge count for the second character. If the count reaches `0`, it implies all words leading to this character are accounted for. Add this character to the queue.
4. Ensure that the result `res` covers all unique characters in `words`.
