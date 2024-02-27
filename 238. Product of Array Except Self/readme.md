## Problem Description

Given an integer array `nums` of length `n`, return an array `answer` such that `answer[i]` is equal to the product of all the elements of `nums` except `nums[i]`.

The product of any prefix or suffix of `nums` is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in `O(n)` time and without using the division operation.

#### Example 1:
```plaintext\n
Input: nums = [1,2,3,4]
Output: [24,12,8,6]
```
#### Example 2:
```plaintext\n
Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
```
## Constraints

- `2 <= nums.length <= 10^5`
- `-30 <= nums[i] <= 30`
- The product of any prefix or suffix of `nums` is guaranteed to fit in a 32-bit integer.

## Follow up

- Can you solve the problem in `O(1)` extra space complexity? (The output array does not count as extra space for space complexity analysis.)

## Concept
1. Calculate the product of all elements and divide by the element itself, but if any element is 0, this method will fail.
2. Create two arrays to record the product of the left and right subarrays, respectively.
