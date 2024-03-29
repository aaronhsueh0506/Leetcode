## Problem Description

Given a **non-empty** array `nums` containing **only positive integers**, find if the array can be partitioned into two subsets such that the sum of elements in both subsets is equal.

#### Example 1:
```plaintext
Input: nums = [1,5,11,5]
Output: true
Explanation: The array can be partitioned as [1, 5, 5] and [11].
```
#### Example 2:
```plaintext
Input: nums = [1,2,3,5]
Output: false
Explanation: The array cannot be partitioned into equal sum subsets.
```
## Constraints

- `1 <= nums.length <= 200`
- `1 <= nums[i] <= 100`

## Concept
1. Split into two parts, so need to check if half of the total sum can be achieved.
2. Use dynamic programming to record; if dp[i] is true, then dp[i+num] is also true for reversing from sum to 0.
3. Iterate in reverse from sum to 0, because forward iteration may update the wrong index.
