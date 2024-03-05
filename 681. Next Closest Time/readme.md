## Problem Decsription

Given a `time` represented in the format `"HH:MM"`, form the next closest time by reusing the current digits. There is no limit on how many times a digit can be reused.

You may assume the given input string is always valid. For example, `"01:34"`, `"12:09"` are all valid. `"1:34"`, `"12:9"` are all invalid.

#### Example 1:
```plaintext
Input: time = "19:34"
Output: "19:39"
Explanation: The next closest time choosing from digits 1, 9, 3, 4, is 19:39, which occurs 5 minutes later.
It is not 19:33, because this occurs 23 hours and 59 minutes later.
```
#### Example 2:
```plaintext
Input: time = "23:59"
Output: "22:22"
Explanation: The next closest time choosing from digits 2, 3, 5, 9, is 22:22.
It may be assumed that the returned time is next day's time since it is smaller than the input time numerically.
```

## Constraints:

- `time.length == 5`
- `time` is a valid time in the form `"HH:MM"`.
- `0 <= HH < 24`
- `0 <= MM < 60`

## Concept
1. Use a set to store 'time[i]' for automatic sorting."
2. Use 'string.find' to find the position ('pos').
  - If 'pos' is 's.size()-1', it means this is the largest number and will be updated to the smallest one.
  - Otherwise, replace it with the 'pos+1' number if it is valid.
    * (For 'i=4'), all next numbers are fine.
    * (For 'i=3'), the next number should be less than or equal to '5' (maximum '59').
    * (For 'i=2'), the next number should be less than or equal to '1', or if 'res[0]' equals '2', the next number should be less than or equal to '3'.
    * (For 'i=1'), the next number should be less than or equal to '2'.
    * Otherwise, update the minimum number 'str[0]'."
