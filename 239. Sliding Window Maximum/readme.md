## Problem Description

You are given an array `nums` of `n` integers and an integer `k`. You need to find the maximum value in each sliding window of size `k` and return the result as an array.

#### Example 1:
```plaintext
Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
Output: [3,3,5,5,6,7]
Explanation:
Window position Max

[1 3 -1] -3 5 3 6 7 3
1 [3 -1 -3] 5 3 6 7 3
1 3 [-1 -3 5] 3 6 7 5
1 3 -1 [-3 5 3] 6 7 5
1 3 -1 -3 [5 3 6] 7 6
1 3 -1 -3 5 [3 6 7] 7
```

#### Example 2:
```plaintext
Input: nums = [1], k = 1
Output: [1]
```

## Constraints

- `1 <= nums.length <= 10^5`
- `-10^4 <= nums[i] <= 10^4`
- `1 <= k <= nums.length`

## Concept
1. use max-heap and keep the size less or equals than k O(nlogn)
2. use de-queue can O(n)
