## Problem Description

Given an integer array `nums` sorted in ascending order, and an integer `target`. The array is rotated at an unknown pivot index `x` (`0 <= x < nums.length`) such that the resulting array is `[nums[x], nums[x+1], ..., nums[n-1], nums[0], nums[1], ..., nums[x-1]]` (0-indexed).

For example, `[0,1,2,4,5,6,7]` might be rotated at pivot index 3 and become `[4,5,6,7,0,1,2]`.

You must write an algorithm with `O(log n)` runtime complexity that returns the index of `target` in `nums`, or `-1` if `target` is not found in `nums`.

#### Example 1:
> Input: nums = [4,5,6,7,0,1,2], target = 0
>
> Output: 4

#### Example 2:
> Input: nums = [4,5,6,7,0,1,2], target = 3
>
> Output: -1

#### Example 3:
> Input: nums = [1], target = 0
>
> Output: -1

### Constraints

- `1 <= nums.length <= 5000`
- `-10^4 <= nums[i] <= 10^4`
- All values of `nums` are **unique**.
- `nums` is guaranteed to be rotated at some pivot.
- `-10^4 <= target <= 10^4`

## Concept
1. binary search
2. check target in sorted side or not
