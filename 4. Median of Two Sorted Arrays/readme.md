## Problem Description

Given two sorted arrays `nums1` and `nums2` of size `m` and `n` respectively, return the median of the two sorted arrays.

The overall run time complexity should be `O(log (m+n))`.

#### Example 1:
```plaintext
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
```
#### Example 2:
```plaintext
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
```
## Constraints
- `nums1.length == m`
- `nums2.length == n`
- `0 <= m <= 1000`
- `0 <= n <= 1000`
- `1 <= m + n <= 2000`
- `-10^6 <= nums1[i], nums2[i] <= 10^6`

## Concept
1. Make sure nums1.size() < nums2.size().
2. Perform a binary search in nums1:
```plaintext
    - The condition is nums1[m1] < nums2[m2-1]; if true, left = mid + 1 because we want to find the index from 0 to m1-1 in nums1.
3. If the length of nums1 + nums2 is odd, return the minimum of nums1[m1] and nums2[m2].
4. If the length of nums1 + nums2 is even, return the average of max(nums1[m1-1], nums2[m2-1]) and min(nums1[m1], nums2[m2]).
