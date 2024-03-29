## Problem Description

Given a list of non-negative integers `nums`, arrange them such that they form the largest number.

**Note:** The result may be very large, so you need to return a string instead of an integer.

#### Example 1:
```plaintext
Input: nums = [10,2]
Output: "210"
```
#### Example 2:
```plaintext
Input: nums = [3,30,34,5,9]
Output: "9534330"
```
#### Example 3:
```plaintext
Input: nums = [1]
Output: "1"
```
#### Example 4:
```plaintext
Input: nums = [10]
Output: "10"
```
## Constraints

- `1 <= nums.length <= 100`
- `0 <= nums[i] <= 10^9`

## Concept
1. Sort nums using a custom comparator that converts them to strings.
2. If the first number is 0, return "0".
3. Concatenate the nums in string format.
