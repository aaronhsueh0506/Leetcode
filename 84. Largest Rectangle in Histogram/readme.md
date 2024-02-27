## Problem Description

Given an array of integers `heights` representing the histogram's bar height where the width of each bar is 1, return *the area of the largest rectangle in the histogram*.

#### Example 1:

![Example 1](https://assets.leetcode.com/uploads/2021/01/04/histogram.jpg)

> Input: heights = [2,1,5,6,2,3]
>
> Output: 10
>
> Explanation: The above is a histogram where width of each bar is 1. The largest rectangle is shown in the red area, which has an area = 10 units.

#### Example 2:

![Example 2](https://assets.leetcode.com/uploads/2021/01/04/histogram-1.jpg)

> Input: heights = [2,4]
>
> Output: 4

### Constraints:

- `1 <= heights.length <= 10^5`
- `0 <= heights[i] <= 10^4`

## Concept
1. Use a stack to record indices. If a smaller value is encountered, calculate the area before this value.
2. If the stack is empty, it means there is no value lower than this one; the width is i. Otherwise, the width is i - st.top() - 1, which accounts for the distance to the next lower number in the stack.
