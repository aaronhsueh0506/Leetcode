## Problem Description

Given an array `nums` of `n` integers and an integer `target`, find three integers in `nums` such that the sum is closest to `target`. 

Return the sum of the three integers. 

You may assume that each input would have exactly one solution.

#### Example 1:
```plaintext
Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
```
#### Example 2:
```plaintext
Input: nums = [0,0,0], target = 1
Output: 0
Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).
```
## Constraints
- `3 <= nums.length <= 10^3`
- `-10^3 <= nums[i] <= 10^3`
- `-10^4 <= target <= 10^4`

## Concept
1. binary search to find the sum close to target and nums need to be sort
