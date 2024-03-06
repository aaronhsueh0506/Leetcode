## Problem Decsription

Given a list of 24-hour clock time points in **"HH:MM"** format, return the minimum **minutes** difference between any two time-points in the list.

#### Example 1:
```plaintext
Input: timePoints = ["23:59","00:00"]
Output: 1
```
#### Example 2:
```plaintext
Input: timePoints = ["00:00","23:59","00:00"]
Output: 0
 ```

## Constraints

- `2 <= timePoints.length <= 2 * 10^4`
- `timePoints[i]` is in the format `"HH:MM"`.

## Concept
1. Convert all times to minutes, ranging from 0 to 1440, and record them.
2. Subtract the current minutes from the next minutes, and remember to include the comparison for 1440 + first - last to account for the transition from the last time today to the first time tomorrow.
3. Using a sort algorithm would result in a time complexity of O(n log n), whereas a method without sorting can achieve a time complexity of O(n).
