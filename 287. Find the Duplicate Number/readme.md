## Problem Description

Given an array of integers `nums` containing `n + 1` integers where each integer is in the range `[1, n]` inclusive.

There is only one repeated number in `nums`, return this repeated number.

You must solve the problem **without** modifying the array `nums` and uses only constant extra space.

#### Example 1:
```plaintext\n
Input: nums = [1,3,4,2,2]
Output: 2
```
#### Example 2:
```plaintext\n
Input: nums = [3,1,3,4,2]
Output: 3
```
#### Example 3:
```plaintext\n
Input: nums = [1,1]
Output: 1
```
#### Example 4:
```plaintext\n
Input: nums = [1,1,2]
Output: 1
```
## Constraints

- `1 <= n <= 10^5`
- `nums.length == n + 1`
- `1 <= nums[i] <= n`
- All the integers in `nums` appear only once except for **precisely one integer** which appears two or more times.

### Follow-Up

- How can you prove that at least one duplicate number must exist in `nums`?
- Can you solve the problem in linear runtime complexity?

## Concept
Solution 1: 

Time Complexity  O(nlogn) : Use binary search within the range [1, n]. If there is no duplicate below mid, it means the count of numbers less than mid is n.

Solution 2:

Time Complexity O(n) : Floyd cycle detection
