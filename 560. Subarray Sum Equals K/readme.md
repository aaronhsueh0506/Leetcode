## Problem Description

Given an array of integers `nums` and an integer `k`, return *the total number of continuous subarrays whose sum equals to `k`*.

#### Example 1:
```plaintext
Input: nums = [1,1,1], k = 2
Output: 2
```
#### Example 2:
```plaintext
Input: nums = [1,2,3], k = 3
Output: 2
```
## Constraints

- `1 <= nums.length <= 2 * 10^4`
- `-1000 <= nums[i] <= 1000`
- `-10^7 <= k <= 10^7`

## Concept
1. Use sum(i,j) = sum(0,j) - sum(0,i) = k to solve, sum(0,i) = sum(0, j) - k
2. add nums[i] to hash table ({sum, count}), hash table 
3. res += m[sum-k]
