## Problem Description

Given a (0-indexed) integer array `nums` and two integers `low` and `high`, return the number of **nice pairs**.

A **nice pair** is a pair `(i, j)` where `0 <= i < j < nums.length`, and `low <= (nums[i] XOR nums[j]) <= high`.

#### Examplee 1:
```plaintext
Input: nums = [1,4,2,7], low = 2, high = 6
Output: 6
Explanation: All nice pairs are listed as follows:

(0,1): nums[0] XOR nums[1] = 5
(0,2): nums[0] XOR nums[2] = 3
(0,3): nums[0] XOR nums[3] = 6
(1,2): nums[1] XOR nums[2] = 6
(1,3): nums[1] XOR nums[3] = 3
(2,3): nums[2] XOR nums[3] = 5
```

#### Examplee 2:
```plaintext
Input: nums = [9,8,4,2,1], low = 5, high = 14
Output: 8
Explanation: All nice pairs are listed as follows:

(0,2): nums[0] XOR nums[2] = 13
(0,3): nums[0] XOR nums[3] = 11
(0,4): nums[0] XOR nums[4] = 8
(1,2): nums[1] XOR nums[2] = 12
(1,3): nums[1] XOR nums[3] = 10
(1,4): nums[1] XOR nums[4] = 9
(2,3): nums[2] XOR nums[3] = 6
(3,4): nums[3] XOR nums[4] = 3
```

##Constraints

- `1 <= nums.length <= 2 * 10^4`
- `1 <= nums[i] <= 2 * 10^4`
- `1 <= low <= high <= 2 * 10^4`

## Concept
Solution 1: 0-1 Trie, O(15*n) // 15 for bit
1. Because 0 <= i < j < nums.length, push each num from nums to find the count and then insert num into the trie.
2. Obtain the count less than high+1 and subtract the count less than low.
3. In the getCount function:
  - Since we want to perform XOR and check if it's less than lim, we proceed as follows:
  - Perform XOR with 0 for 0^0 and 1^1. If p->child[num_bit] exists, it means the previous node has a num_bit bit (doing 0^0 or 1^1), and if lim_bit equals 1, all nodes crossing this will be less than lim.
  - However, we must check the opposite side where XOR equals 1 (i.e., lim_bit), so we look at p->child[1-num_bit].
  - If lim_bit equals 0, we need to find when XOR is 0, thus we also choose p->child[num_bit].
Solution 2: Brute Force O(n^2)
