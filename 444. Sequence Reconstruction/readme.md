## Problem Description

You are given an integer array `nums` of length `n` where `nums` is a permutation of the integers in the range `[1, n]`. You are also given a 2D integer array `sequences` where `sequences[i]` is a subsequence of `nums`.

Check if `nums` is the shortest possible and the only supersequence. The shortest **supersequence** is a sequence with **the shortest length** and has all `sequences[i]` as subsequences. There could be multiple valid supersequences for the given array `sequences`.

* For example, for `sequences = [[1,2],[1,3]]`, there are two shortest supersequences, `[1,2,3]` and `[1,3,2]`.(
* While for `sequences = [[1,2],[1,3],[1,2,3]]`, the only shortest supersequence possible is `[1,2,3]`. `[1,2,3,4]` is a possible supersequence but not the shortest.
Return `true` if `nums` is the only shortest supersequence for `sequences`, or `false` otherwise.

A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.

 

#### Example 1:
```plaintext
Input: nums = [1,2,3], sequences = [[1,2],[1,3]]
Output: false
Explanation: There are two possible supersequences: [1,2,3] and [1,3,2].
The sequence [1,2] is a subsequence of both: [1,2,3] and [1,3,2].
The sequence [1,3] is a subsequence of both: [1,2,3] and [1,3,2].
Since nums is not the only shortest supersequence, we return false.
```
#### Example 2:
```plaintext
Input: nums = [1,2,3], sequences = [[1,2]]
Output: false
Explanation: The shortest possible supersequence is [1,2].
The sequence [1,2] is a subsequence of it: [1,2].
Since nums is not the shortest supersequence, we return false.
```
#### Example 3:
```plaintext
Input: nums = [1,2,3], sequences = [[1,2],[1,3],[2,3]]
Output: true
Explanation: The shortest possible supersequence is [1,2,3].
The sequence [1,2] is a subsequence of it: [1,2,3].
The sequence [1,3] is a subsequence of it: [1,2,3].
The sequence [2,3] is a subsequence of it: [1,2,3].
Since nums is the only shortest supersequence, we return true.
 ```

## Constraints

- `n == nums.length`
- `1 <= n <= 10^4`
- `nums` is a permutation of all the integers in the range `[1, n]`.
- `1 <= sequences.length <= 10^4`
- `1 <= sequences[i].length <= 10^4`
- `1 <= sum(sequences[i].length) <= 10^5`
- `1 <= sequences[i][j] <= n`
- All the arrays of `sequences` are **unique**.
- `sequences[i]` is a subsequence of `nums`.

## Concept
1. Use two hash tables: `m` for recording the mapping from `nums[i]` to its index `i`, and `pre` for recording the mapping from `nums[i]` to its previous index `i`.
2. Since the requirement is for the shortest length, any `seq[i]` that does not exist in nums cannot contribute to the shortest sequence.
3. If the position of `seq[i-1]` is greater than `seq[i]`, it means the order is incorrect.
4. Record the previous index. If `i==0`, it means there is no previous, so keep it as `-1`. If `pre[seq[i]]` exists, save the larger value between `pre[seq[i]]` and `m[seq[i-1]]`. (For example, in 1<-2, 1<-3, 2<-3, keep 2<-3.)
5. Because we aim to find the unique solution, we check if `pre[nums[i]]` equals `i-1`.
