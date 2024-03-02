## Problem Description

Given an array of points where `points[i] = [xi, yi]` represents a point on the X-Y plane, return the maximum number of points that lie on the same straight line.

#### Example 1:
```plaintext
Input: points = [[1,1],[2,2],[3,3]]
Output: 3
```
#### Example 2:
```plaintext
Input: points = [[1,1],[3,2],[5,3],[4,1],[2,3],[1,4]]
Output: 4
```

## Constraints

- `1 <= points.length <= 300`
- `points[i].length == 2`
- `-10^4 <= xi, yi <= 10^4`
- All the points are unique.

## Concept
1. Find the slope between two points.
2. Calculating `dx/dy` may encounter a situation where dy == 0. Use a pair to represent the slope as `{dx/d, dy/d}`, applying a custom gcd function for `d` to normalize the slope.
3. In the gcd function, `gcd(a, b)` return `a` if `b == 0`; otherwise, it returns `gcd(b, a % b)`.
4. Since it is unclear whether `points[j]` is above or below `points[i]`, the gcd function needs to return either a negative or positive gcd based on the sign of `dy`.
