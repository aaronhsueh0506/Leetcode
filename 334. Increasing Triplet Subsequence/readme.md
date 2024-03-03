## Problem Description

Given an integer array `nums`, return `true` if there exists a triple of indices `(i, j, k)` such that `i < j < k` and `nums[i] < nums[j] < nums[k]`. If no such indices exists, return `false`.

#### Example 1:
```plaintext
Input: nums = [1,2,3,4,5]
Output: true
Explanation: Any triplet where i < j < k is valid.
```
#### Example 2:
```plaintext
Input: nums = [5,4,3,2,1]
Output: false
Explanation: No triplet exists.
```
#### Example 3:
```plaintext
Input: nums = [2,1,5,0,4,6]
Output: true
Explanation: The triplet (3, 4, 5) is valid because nums[3] == 0 < nums[4] == 4 < nums[5] == 6.
```

## Constraints

- `1 <= nums.length <= 5 * 10^5`
- `-2^31 <= nums[i] <= 2^31 - 1`

## Concept
Solution 1:

Find the maximum number to the right of nums[i], and then start from the left side. If minLeft < nums[i] < maxRight[i], return true.

Solution 2:

Set smallest and smaller to INT_MAX.
- If a number is less than smallest, update smallest.
- If a number is less than smaller but greater than smallest, update smaller.
- Even if we find another number that is smaller than the original smallest or smaller, this number will be less than the original. Since smallest and smaller are no longer INT_MAX, you can find the solution if you proceed to the else condition.
