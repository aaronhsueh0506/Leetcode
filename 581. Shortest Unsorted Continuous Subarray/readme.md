Given an integer array `nums`, you need to find one **continuous subarray** such that if you only sort this subarray in non-decreasing order, then the whole array will be sorted in non-decreasing order.

Return the shortest such subarray and output its length.

#### Example 1:
```plaintext
Input: nums = [2,6,4,8,10,9,15]
Output: 5
Explanation: You need to sort [6, 4, 8, 10, 9] in ascending order to make the whole array sorted in ascending order.
```
#### Example 2:
```plaintext
Input: nums = [1,2,3,4]
Output: 0
```
#### Example 3:
```plaintext
Input: nums = [1]
Output: 0
 ```

## Constraints

- `1 <= nums.length <= 10^4`
- `-10^5 <= nums[i] <= 10^5`

## Concept
1. Find the local maximum from left and local minimum for right.
2. If local maximum is greater than current or local minimum less than minimum, means this element in unsort subarray.
