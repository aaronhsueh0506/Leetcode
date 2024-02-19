## Problem Description

Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).

You may assume that the intervals were initially sorted according to their start times.

#### Example 1:
> Input: intervals = [[1,3],[6,9]], newInterval = [2,5]
> 
> Output: [[1,5],[6,9]]

Explanation: Because the new interval `[2,5]` overlaps with `[1,3]`, merge them into a single interval `[1,5]`.

#### Example 2:
> Input: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
> 
> Output: [[1,2],[3,10],[12,16]]

Explanation: Because the new interval `[4,8]` overlaps with `[3,5]`, `[6,7]`, and `[8,10]`, merge them into a single interval `[3,10]`.

#### Example 3:
> Input: intervals = [], newInterval = [5,7]
> 
> Output: [[5,7]]

Explanation: The intervals list is empty, so simply add the new interval.

#### Example 4:
> Input: intervals = [[1,5]], newInterval = [2,3]
> 
> Output: [[1,5]]

Explanation: The new interval is within the bounds of an existing interval, so no merge is necessary.

#### Example 5:
> Input: intervals = [[1,5]], newInterval = [2,7]
> 
> Output: [[1,7]]

Explanation: The new interval extends beyond the bounds of an existing interval, so they are merged.

## Constraints

- `0 <= intervals.length <= 10^4`
- `intervals[i].length == 2`
- `0 <= intervals[i][0] <= intervals[i][1] <= 10^5`
- `newInterval.length == 2`
- `0 <= newInterval[0] <= newInterval[1] <= 10^5`

## Concepts
1. Check if each interval's end is less than the new interval's start. If so, directly add it to the result and record the insertion position (how many intervals are less than the new one).
2. If each interval's start is greater than the new interval's end, directly add it to the result.
3. If there's an overlap, update the new interval's start to the lower of the two starts (the new interval's start and the current interval's start).
4. If there's an overlap, update the new interval's end to the higher of the two ends (the new interval's end and the current interval's end).
5. Insert the new interval at the recorded insertion position.
