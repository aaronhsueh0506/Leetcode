## Problem Description

Given an unsorted integer array `nums`, return the smallest missing positive integer.

You must implement an algorithm that runs in `O(n)` time and uses constant extra space.

#### Example 1:
```plaintext
Input: nums = [1,2,0]
Output: 3
```

#### Example 2:
```plaintext
Input: nums = [3,4,-1,1]
Output: 2
```

#### Example 3:
```plaintext
Input: nums = [7,8,9,11,12]
Output: 1
```

## Constraints

- `1 <= nums.length <= 5 * 10^5`
- `-2^31 <= nums[i] <= 2^31 - 1`

## Concept
1. The question requires the time complexity to be O(n) and space complexity to be O(1), which means we cannot use sorting as it would result in O(n log n) when combined with a for-loop.
2. A for-loop with swapping can achieve O(n) time complexity. If nums[i] is within [1, n], place it at index i-1 (ensure nums[i] == nums[nums[i] - 1]).
3. Check if nums[i] == i + 1.
