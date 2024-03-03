You are given a list of bombs. The range of a bomb is defined as the area where its effect can be felt. This area is in the shape of a circle with the bomb at its center. The bomb can detonate other bombs within its range. The `i-th` bomb is represented as a 0-indexed integer array `bombs[i] = [xi, yi, ri]` where `xi` and `yi` are the coordinates of the bomb, and `ri` is the radius of its range.

You may choose to detonate a single bomb initially. When a bomb is detonated, it will detonate all bombs that are within its range. These bombs will further detonate the bombs that are within their ranges.

Return *the maximum number of bombs that can be detonated*.

#### Example 1:

![Example 1](https://assets.leetcode.com/uploads/2021/11/06/desmos-eg-3.png)
```plaintext
Input: bombs = [[2,1,3],[6,1,4]]
Output: 2
Explanation: The above figure shows the positions and ranges of the 2 bombs.
If we detonate the left bomb, the right bomb will not be affected.
But if we detonate the right bomb, it will detonate the left bomb.
So, the maximum bombs we can detonate is 2.
```

#### Example 2:

![Example 2](https://assets.leetcode.com/uploads/2021/11/06/desmos-eg-2.png)
```plaintext
Input: bombs = [[1,1,5],[10,10,5]]
Output: 1
Explanation: Detonating either bomb will not detonate the other bomb, so the maximum number of bombs we can detonate is 1.
```

#### Example 3:

![Example 3](https://assets.leetcode.com/uploads/2021/11/07/desmos-eg1.png)
```plaintext
Input: bombs = [[2,2,2],[3,3,3],[2,4,2]]
Output: 3
Explanation: If we detonate the middle bomb, it will detonate both the left and the right bombs.
So, the maximum number of bombs we can detonate is 3.
```

## Constraints

- `1 <= bombs.length <= 100`
- `bombs[i].length == 3`
- `-10^9 <= xi, yi <= 10^9`
- `1 <= ri <= 10^6`

## Concept
Solution 1: O(n^3)
1. First, create a graph indicating which bombs each bomb can connect to.
2. Use BFS and start from each bomb and iterate using graph[cur].
   
Solution 2: O(n^2 log n)
1. Sort the bombs by their radius.
2. Use BFS with a visited array and start from the bomb with the largest radius.
