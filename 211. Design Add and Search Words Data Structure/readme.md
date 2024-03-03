## Problem Description

Design a data structure that supports adding new words and finding if a string matches any previously added string.

Implement the `WordDictionary` class:

- `WordDictionary()` Initializes the object.
- `void addWord(word)` Adds `word` to the data structure, it can be matched later.
- `bool search(word)` Returns `true` if there is any string in the data structure that matches `word` or `false` otherwise. `word` may contain dots `'.'` where dots can be matched with any letter.

#### Example:
```plaintext
Input
["WordDictionary","addWord","addWord","addWord","search","search","search","search"]
[[],["bad"],["dad"],["mad"],["pad"],["bad"],[".ad"],["b.."]]
Output
[null,null,null,null,false,true,true,true]

Explanation
WordDictionary wordDictionary = new WordDictionary();
wordDictionary.addWord("bad");
wordDictionary.addWord("dad");
wordDictionary.addWord("mad");
wordDictionary.search("pad"); // return False
wordDictionary.search("bad"); // return True
wordDictionary.search(".ad"); // return True
wordDictionary.search("b.."); // return True
```

## Constraints:

- `1 <= word.length <= 500`
- `word` in `addWord` consists of lowercase English letters.
- `word` in `search` consist of '.' or lowercase English letters.
- At most `50000` calls will be made to `addWord` and `search`.

## Concept
Solution 1: DFS
Create a hash set to record words and a hash table to record {length, set of words}.
  - addWord: Insert the word into the hash set and the hash table.
  - searchWord: O(n*l)
    * If there are no '.' characters, check whether the word is in the hash set.
    * If '.' characters are included, compare every character.
Solution 2: Trie
  - Create a Trie to store all words. The addWord function can be implemented as an insert function in the Trie.
  - searchWord: O(26^l)
    * If there are no '.' characters, check p->child[idx] and search for the next word.
    * If '.' characters are included, iterate through all p->child nodes and proceed to the next word.
