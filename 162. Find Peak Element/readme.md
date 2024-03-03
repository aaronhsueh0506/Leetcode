## Problem Description

A peak element is an element that is strictly greater than its neighbors.

Given an integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that `nums[-1] = nums[n] = -∞`.

You must write an algorithm that runs in `O(log n)` time.

#### Example 1:
```plaintext
Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.
```
#### Example 2:
```plaintext
Input: nums = [1,2,1,3,5,6,4]
Output: 5
Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.
```

## Constraints
- `1 <= nums.length <= 1000`
- `-2^31 <= nums[i] <= 2^31 - 1`
- `nums[i] != nums[i + 1]` for all valid `i`.

## Concept
1. The time complexity should be O(log n), so use binary search.
2. Compare mid with mid+1 to adjust the search boundary.
3. If mid+1 is greater than mid, it implies a peak exists to the right side of mid. Therefore, update left to mid+1 to search for a higher number.
