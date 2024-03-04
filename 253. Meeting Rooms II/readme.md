## Problem Description

Given an array of meeting time intervals `intervals` where `intervals[i] = [starti, endi]`, return the minimum number of conference rooms required.

#### Example 1:
```plaintext
Input: intervals = [[0,30],[5,10],[15,20]]
Output: 2
```
#### Example 2:
```plaintext
Input: intervals = [[7,10],[2,4]]
Output: 1
 ```

## Constraints

- `1 <= intervals.length <= 10^4`
- `0 <= starti < endi <= 10^6`

## Concept
1. Sort the meeting by start time
2. Use a min-heap save the end time of meeting, if new meeting start time is greater than is first in heap, pop this meeting (new meeting use the room of pop meeting).
