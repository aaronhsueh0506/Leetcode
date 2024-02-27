## Problem Description

Given an array of intervals `intervals` where `intervals[i] = [start_i, end_i]`, return *the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping*.

#### Example 1:
```plaintext
Input: intervals = [[1,2],[2,3],[3,4],[1,3]]
Output: 1
Explanation: [1,3] can be removed and the rest of the intervals are non-overlapping.
```
#### Example 2:
```plaintext
Input: intervals = [[1,2],[1,2],[1,2]]
Output: 2
Explanation: You need to remove two [1,2] to make the rest of the intervals non-overlapping.
```
#### Example 3:
```plaintext
Input: intervals = [[1,2],[2,3]]
Output: 0
Explanation: You don't need to remove any of the intervals since they're already non-overlapping.
```
## Constraints

- `1 <= intervals.length <= 10^5`
- `intervals[i].length == 2`
- `-5 * 10^4 <= start_i < end_i <= 5 * 10^4`

## Concept
1. If intervals.size() is less than 2, there's nothing to delete; return 0 directly.
2. First, sort the array to facilitate comparison.
3. Compare next->first and cur->second to check for overlap.
4. Keep the smaller value between next->second and cur->second as the left boundary to ensure the minimum number of deletions needed.
