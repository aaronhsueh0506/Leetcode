### Problem Description

Serialization is the process of converting a data structure or object into a sequence of bits so that it can be stored in a file or memory buffer, or transmitted across a network connection link to be reconstructed later in the same or another computer environment.

Design an algorithm to serialize and deserialize a binary tree. There is no restriction on how your serialization/deserialization algorithm should work. You just need to ensure that a binary tree can be serialized to a string and this string can be deserialized to the original tree structure.

Clarification: The input/output format is the same as how LeetCode serializes binary trees. You do not necessarily need to follow this format, so please be creative and come up with different approaches yourself.

#### Example 1:
![Example][https://assets.leetcode.com/uploads/2020/09/15/serdeser.jpg]
> Input: root = [1,2,3,null,null,4,5]
>
> Output: [1,2,3,null,null,4,5]
>
> Explanation: The tree looks like the following diagram:
>
> The serialized string would be something like "1,2,3,null,null,4,5", which includes all values in the tree, including null for missing children.

#### Example 2:

> Input: root = []
>
> Output: []
> 
## Constraints:

- The number of nodes in the tree is in the range `[0, 10^4]`.
- `-1000 <= Node.val <= 1000`

## Note:

The solution is required to serialize and deserialize the tree accurately, which means any serialized string from the `serialize` function should be able to be deserialized back to the original tree structure by the `deserialize` function.

## Concept
1. use istringstream & ostringstream.
2. out << root->val << ' '; // Serialize by appending root->val followed by a space.
3. in >> val; // Deserialize by reading values into val.
4. Use '#' for nullptr.
