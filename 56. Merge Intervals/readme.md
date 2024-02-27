## Problem Description

Given an array of `intervals` where `intervals[i] = [start_i, end_i]`, merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

#### Example 1:

> Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
>
> Output: [[1,6],[8,10],[15,18]]
>
> Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].

#### Example 2:

> Input: intervals = [[1,4],[4,5]]
>
> Output: [[1,5]]
>
> Explanation: Intervals [1,4] and [4,5] are considered overlapping.

## Constraints:

- `1 <= intervals.length <= 10^4`
- `intervals[i].length == 2`
- `0 <= start_i <= end_i <= 10^4`

## Concept
1. Sort the intervals.
2. Initialize res with intervals[0].
3. If res.back()[1] < intervals[i][0], it means there is no overlap; otherwise, update res.back()[1] to max(res.back()[1], intervals[i][1]) for merging.
4. If non-overlapping, add the current interval to res.