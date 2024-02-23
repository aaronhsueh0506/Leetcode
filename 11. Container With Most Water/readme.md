## Problem Description

Given `n` non-negative > Integers `a1, a2, ..., an`, where each represents a po> Int at coord> Inate `(i, ai)`. `n` vertical l> Ines are drawn such that the two endpo> Ints of the l> Ine `i` is at `(i, ai)` and `(i, 0)`. F> Ind two l> Ines, which, together with the x-axis forms a conta> Iner, such that the conta> Iner conta> Ins the most water.

Notice that you may not slant the conta> Iner.

#### Example 1:
> Input: height = [1,8,6,2,5,4,8,3,7]
> 
> Output: 49
> 
> Explanation: The above vertical l> Ines are represented by array [1,8,6,2,5,4,8,3,7]. > In this case, the max area of water (blue section) the conta> Iner can conta> In is 49.

![Example 1](https://s3-lc-upload.s3.amazonaws.com/uploads/2018/07/17/question_11.jpg)

#### Example 2:
> Input: height = [1,1]
> 
> Output: 1

#### Example 3:
> Input: height = [4,3,2,1,4]
> 
> Output: 16

#### Example 4:
> Input: height = [1,2,1]
> 
> Output: 2

## Constraints

- `n == height.length`
- `2 <= n <= 10^5`
- `0 <= height[i] <= 10^4`

## Concept
1. two pointer
2. move smaller boundary to find the large number ( keep larger boundary)
