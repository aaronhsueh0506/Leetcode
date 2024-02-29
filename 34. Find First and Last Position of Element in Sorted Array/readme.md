## Problem Description

Given an array of integers `nums` sorted in non-decreasing order, find the starting and ending position of a given `target` value.

If `target` is not found in the array, return `[-1, -1]`.

You must write an algorithm with `O(log n)` runtime complexity.

#### Example 1:
```plaintext
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
```

#### Example 2:
```plaintext
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1, -1]
```

#### Example 3:
```plaintext
Input: nums = [], target = 0
Output: [-1, -1]
```

## Constraints

- `0 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`
- `nums` is a non-decreasing array.
- `-10^9 <= target <= 10^9`

## Concept
1. The array is sorted, so binary search can be utilized.
2. To find the first position, use nums[mid] < target. This will stop when left == right == first_position of the target.
3. Check if the target exists. If nums[left] != target or right != nums.size(), the target does not exist in the array.
4. For the last position, use nums[mid] <= target. This will stop when left == right == first_position of (target + n), so res[1] is left - 1 or right - 1.
