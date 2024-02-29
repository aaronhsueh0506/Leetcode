## Problem Description

Given four integer arrays `nums1`, `nums2`, `nums3`, and `nums4` all of length `n`, return *the number of tuples `(i, j, k, l)` such that:*

- `0 <= i, j, k, l < n`
- `nums1[i] + nums2[j] + nums3[k] + nums4[l] == 0`

#### Example 1:
```plaintext
Input: nums1 = [1,2], nums2 = [-2,-1], nums3 = [-1,2], nums4 = [0,2]
Output: 2
Explanation:
The two tuples are:

(0, 0, 0, 1) -> nums1[0] + nums2[0] + nums3[0] + nums4[1] = 1 - 2 - 1 + 2 = 0
(1, 1, 0, 0) -> nums1[1] + nums2[1] + nums3[0] + nums4[0] = 2 - 1 - 1 + 0 = 0
```

#### Example 2:
```plaintext
Input: nums1 = [0,1,-1], nums2 = [-1,1,0], nums3 = [0,0,1], nums4 = [-1,1,1]
Output: 17
```

## Constraints

- `n == nums1.length == nums2.length == nums3.length == nums4.length`
- `1 <= n <= 200`
- `-2^28 <= nums1[i], nums2[i], nums3[i], nums4[i] <= 2^28`

## Concept
1. Since 2^28 * 4 < 2^30, using int for data storage is sufficient.
2. To find combinations, use two for-loops and a hash table to record the sums. If -sum is in the hash table (indicating a sum of 0), add the corresponding combinations to the result.
