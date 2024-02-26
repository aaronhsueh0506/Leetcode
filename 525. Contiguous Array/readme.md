## Problem Description

Given a binary array `nums`, return *the maximum length of a contiguous subarray with an equal number of `0` and `1`*.

#### Example 1:
> Input: nums = [0,1]
> 
> Output: 2
> 
> Explanation: [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.

#### Example 2:
> Input: nums = [0,1,0]
> 
> Output: 2
>
> Explanation: [0, 1] (or [1, 0]) is a longest contiguous subarray with equal number of 0 and 1.

### Constraints

- `1 <= nums.length <= 10^5`
- `nums[i]` is either `0` or `1`.

## Concept
1. Use a hash table to record the first index of each sum. If a sum has appeared before, it means the section from the current index to the previous index forms a contiguous array.
