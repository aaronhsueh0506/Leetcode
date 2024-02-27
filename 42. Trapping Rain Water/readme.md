## Problem Description

Given `n` non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

### Example 1:
![Trapping Rain Water](https://assets.leetcode.com/uploads/2018/10/22/rainwatertrap.png)
> Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
>
> Output: 6
>
> Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.

### Example 2:
> Input: height = [4,2,0,3,2,5]
>
> Output: 9

markdown
Copy code

### Constraints:
- `n == height.length`
- `1 <= n <= 2 * 10^4`
- `0 <= height[i] <= 10^5`

## Concept
3 condition: highest in left/right/middle

1. Find the maximum height on the left and right for each position.
2. Decrease the right boundary if the left maximum is greater than the right maximum, akin to a rising sea level.
3. If the height at the current position is less than the left maximum, it indicates that rainwater can be collected.