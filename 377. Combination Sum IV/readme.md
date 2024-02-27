## Problem Description

Given an array of distinct integers nums and a target integer target, return the number of possible combinations that add up to target.

The test cases are generated so that the answer can fit in a 32-bit integer.


#### Example 1:
```plaintext
Input: nums = [1,2,3], target = 4
Output: 7
Explanation:
The possible combination ways are:

(1, 1, 1, 1)
(1, 1, 2)
(1, 2, 1)
(1, 3)
(2, 1, 1)
(2, 2)
(3, 1)
Note that different sequences are counted as different combinations.
```
#### Example 2:
```plaintext
Input: nums = [9], target = 3
Output: 0
```
## Constraints

- `1 <= nums.length <= 200`
- `1 <= nums[i] <= 1000`
- All the elements of `nums` are **unique**.
- `1 <= target <= 1000`

## Follow up

What if negative numbers are allowed in the given array? How does it change the problem? What limitation do we need to put on the array's elements?

## Concept
Solution 1: recursive & hash table O(target*n)
1. minus target with nums[i] if target >= nums[i], this means find all combination of target
2. Hash table record target's combination to avoid double counting

Solution 2: dynamic programming O(target*n)
1. dp[i] means combinations of i, find from 0 to target
2. if(i >= nums[i]), dp[i] = dp[i-nums]; // add this nums means get all combination of this number
