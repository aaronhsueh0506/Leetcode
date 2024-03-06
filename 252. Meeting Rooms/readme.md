## Problem Description

Given an array of meeting time `intervals` where `intervals[i] = [starti, endi]`, determine if a person could attend all meetings.
 

#### Example 1:
```plaintext
Input: intervals = [[0,30],[5,10],[15,20]]
Output: false
```
#### Example 2:
```plaintext
Input: intervals = [[7,10],[2,4]]
Output: true
```

## Constraints

- `0 <= intervals.length <= 10^4`
- `intervals[i].length == 2`
- `0 <= starti < endi <= 10^6`

## Concept
1. Sort it and check overlap
