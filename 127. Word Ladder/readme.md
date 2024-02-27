## Problem Description

Given two words, *beginWord* and *endWord*, and a dictionary *wordList*, return the length of the shortest transformation sequence from *beginWord* to *endWord*, such that:

1. Only one letter can be changed at a time.
2. Each transformed word must exist in the word list.

Return 0 if there is no such transformation sequence.

### Example 1:
```plaintext
Input: beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log","cog"]
Output: 5
Explanation: As one shortest transformation is "hit" -"hot" -"dot" -"dog" -"cog", return its length 5.
```
### Example 2:
```plaintext
Input: beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log"]
Output: 0
Explanation: The endWord "cog" is not in wordList, therefore no possible transformation.
```
### Constraints

- `1 <= beginWord.length <= 100`
- `endWord.length == beginWord.length`
- `1 <= wordList.length <= 5000`
- `wordList[i].length == beginWord.length`
- `beginWord`, `endWord`, and `wordList[i]` consist of lowercase English letters.
- `beginWord != endWord`
- All the strings in `wordList` are unique.

## Concept
1. Check if beginWord and endWord are in the word set; if not, return 0.
2. Use BFS, starting from beginWord, with res initialized to 1.
3. Change each character in the word from 'a' to 'z'; if the new word is in the word set, add it to the queue and erase it from the word set.
4. If the new word equals endWord, return res + 1.
5. Return 0 after BFS if endWord cannot be found.
