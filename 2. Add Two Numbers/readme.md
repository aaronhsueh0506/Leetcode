## Description
You are given two **non-empty** linked lists representing two non-negative integers. The digits are stored in **reverse order**, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

#### Example 1:
```plaintext
Input: l1 = [2,4,3], l2 = [5,6,4]

Output: [7,0,8]
Explanation: 342 + 465 = 807.
```
#### Example 2:
```plaintext
Input: l1 = [0], l2 = [0]
Output: [0]
```
#### Example 3:
```plaintext
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
 ```

## Constraints
 * The number of nodes in each linked list is in the range [1, 100].
 * 0 <= Node.val <= 9
 * It is guaranteed that the list represents a number that does not have leading zeros.


## Concept
1. Add the value of `l2` to `l1` as `cur`.
2. If the value of `cur` is over 10, use modulo to adjust, and handle the carry (if null, create one node).
3. Check if the next value is null or not:
```plaintext
   - If both `l1` and `l2` are null, end the process.
   - If `l1` is null, then concatenate `l2` and end the process.
   - If `l2` is null, create a zero node (if `cur` needs to carry).
4. Move `cur` to the next node.
