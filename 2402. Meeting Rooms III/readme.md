## Problem Decsription

You are given an integer `n`. There are `n` rooms numbered from `0` to `n - 1`.

You are given a 2D integer array `meetings` where `meetings[i] = [starti, endi]` means that a meeting will be held during the half-closed time interval `[starti, endi)`. All the values of `starti` are unique.

Meetings are allocated to rooms in the following manner:

1. Each meeting will take place in the unused room with the lowest number.
2. If there are no available rooms, the meeting will be delayed until a room becomes free. The delayed meeting should have the same duration as the original meeting.
3. When a room becomes unused, meetings that have an earlier original start time should be given the room.

Return the number of the room that held the most meetings. If there are multiple rooms, return the room with the lowest number.

A half-closed interval `[a, b)` is the interval between `a` and `b` including `a` and not including `b`.


Example 1:
```plaintext
Input: n = 2, intervals = [[0,30],[5,10],[15,20]]
Output: 2
Explanation: We need two meeting rooms to hold all the meetings.
```
Example 2:
```plaintext
Input: n = 1, intervals = [[7,10],[2,4]]
Output: 1
Explanation: Only one meeting room is needed since the meetings don't overlap.
```
## Constraints

- `1 <= n <= 10^4`
- `0 <= intervals.length <= 10^4`
- `intervals[i].length == 2`
- `0 <= starti < endi <= 10^6`

## Concept
1. Maintain two min-heaps: one for the indices of available rooms, and another for the end times and indices of busy rooms.
2. If a new meeting's starting time is greater than or equal to the end time of a busy room, it means the room becomes available.
3. Assign the meeting to the room with the lowest index. If there are no available rooms, use the first room to become free from the busy rooms heap, then add the meeting duration to this room's end time.
4. Maintain a vector count to record each meeting use which room.
