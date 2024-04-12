You are given a **0-indexed** 2D integer array `peaks` where `peaks[i] = [xi, yi]` states that mountain `i` has a peak at coordinates `(xi, yi)`. A mountain can be described as a right-angled isosceles triangle, with its base along the `x`-axis and a right angle at its peak. More formally, the gradients of ascending and descending the mountain are `1` and `-1` respectively.

A mountain is considered **visible** if its peak does not lie within another mountain (including the border of other mountains).

Return the number of visible mountains.

 

#### Example 1:
![Ex](https://assets.leetcode.com/uploads/2022/07/19/ex1.png)
```plaintext
Input: peaks = [[2,2],[6,3],[5,4]]
Output: 2
Explanation: The diagram above shows the mountains.
- Mountain 0 is visible since its peak does not lie within another mountain or its sides.
- Mountain 1 is not visible since its peak lies within the side of mountain 2.
- Mountain 2 is visible since its peak does not lie within another mountain or its sides.
There are 2 mountains that are visible.
```
#### Example 2:
![Ex2](https://assets.leetcode.com/uploads/2022/07/19/ex2.png)
```plaintext
Input: peaks = [[1,3],[1,3]]
Output: 0
Explanation: The diagram above shows the mountains (they completely overlap).
Both mountains are not visible since their peaks lie within each other.
``` 

## Constraints

- `1 <= peaks.length <= 10^5`
- `peaks[i].length == 2`
- `1 <= xi, yi <= 10^5`

## Concept
1. Because this problem specifies that being inside or lying on the side is invalid, identify the left and right boundaries for each element and sort them (you can directly use the sort function by subtracting 1 from the right boundary).
2. There are three conditions for validity:
  - The index `i` equals `n-1`, which is the last element, so no one can check beyond it.
  - The left boundary is less than the next one.
  - The left boundaries are the same, but the right boundary is larger than the next one.
3. Skip any case where the right boundary is less than or equal to `i` (which means it either lies inside or on the side).
