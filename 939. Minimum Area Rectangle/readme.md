## Problem Decsription

You are given an array of `points` in the X-Y plane points where `points[i] = [xi, yi]`.

Return the minimum area of a rectangle formed from these points, with sides parallel to the X and Y axes. If there is not any such rectangle, return `0`.

#### Example 1:
![Example1](https://assets.leetcode.com/uploads/2021/08/03/rec1.JPG)
```plaintext
Input: points = [[1,1],[1,3],[3,1],[3,3],[2,2]]
Output: 4
```
#### Example 2:
![Example2](https://assets.leetcode.com/uploads/2021/08/03/rec2.JPG)
```plaintext
Input: points = [[1,1],[1,3],[3,1],[3,3],[4,1],[4,3]]
Output: 2
```

## Constraints

- `1 <= points.length <= 500`
- `points[i].length == 2`
- `0 <= xi, yi <= 4 * 10^4`
- All the given points are unique.

## Concept
1. Need to find two points with distinct x and y coordinates. Then, check if the other two points have the same point1_x, point2_y and the same point2_x, point1_y.
2. Use a hash table to record which y coordinates are associated with each x coordinate.
