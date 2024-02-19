## Problem Description

Given an array of points where `points[i] = [xi, yi]` represents a point on the X-Y plane and an integer `k`, return the `k` closest points to the origin `(0, 0)`.

The distance between two points on the X-Y plane is the Euclidean distance (i.e., `√(x1 - x2)^2 + (y1 - y2)^2`).

You may return the answer in any order. The answer is guaranteed to be unique (except for the order that it is in).

#### Example 1:
> Input: points = [[1,3],[-2,2]], k = 1
>
> Output: [[-2,2]]

Explanation: The distance between `(-2, 2)` and the origin is `√((-2 - 0)^2 + (2 - 0)^2) = √(8) = 2.828`, which is the smallest distance.

#### Example 2:
> Input: points = [[3,3],[5,-1],[-2,4]], k = 2
>
> Output: [[3,3],[-2,4]]

Explanation: The distances from the origin are `√(18)` for `(3, 3)`, `√(26)` for `(5, -1)`, and `√(20)` for `(-2, 4)`. The closest two points are `(3, 3)` and `(-2, 4)`.

## Constraints

- `1 <= k <= points.length <= 104`
- `-104 <= xi, yi <= 104`

## Concepts:
Find the k closest points to the origin by using a heap(priority_queue) to record distances. If the number of elements in the heap exceeds k, pop the top element (removing the larger distance).
