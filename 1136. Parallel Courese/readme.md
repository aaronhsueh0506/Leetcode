## Problem Description

You are given an integer `n`, which indicates that there are `n` courses labeled from `1` to `n`. You are also given an array `relations` where `relations[i] = [prevCoursei, nextCoursei]`, representing a prerequisite relationship between course `prevCoursei` and course `nextCoursei`: course `prevCoursei` has to be taken before course `nextCoursei`.

In one semester, you can take any number of courses as long as you have taken all the prerequisites in the previous semester for the courses you are taking.

Return the minimum number of semesters needed to take all courses. If there is no way to take all the courses, return `-1`.

#### Example 1:

![Example1](https://assets.leetcode.com/uploads/2021/02/24/course1graph.jpg)
```plaintext
Input: n = 3, relations = [[1,3],[2,3]]
Output: 2
Explanation: The figure above represents the given graph.
In the first semester, you can take courses 1 and 2.
In the second semester, you can take course 3.
```

#### Example 2:

![Example2](https://assets.leetcode.com/uploads/2021/02/24/course2graph.jpg)

```plaintext
Input: n = 3, relations = [[1,2],[2,3],[3,1]]
Output: -1
Explanation: No course can be studied because they are prerequisites of each other.
```

## Constraints

- `1 <= n <= 5000`
- `1 <= relations.length <= 5000`
- `relations[i].length == 2`
- `1 <= prevCoursei, nextCoursei <= n`
- `prevCoursei != nextCoursei`
- All the pairs `[prevCoursei, nextCoursei]` are unique.

## Concept
1. Create a `graph` represented as `{prev, vector{next}}`, and use an `indeg` array to store the number of prerequisites for each class.
2. Start with classes whose `indeg` is `0` (no prerequisites), and decrement the indeg for the next class. If indeg becomes `0`, it means all prerequisite classes have been finished.
3. Count the number of classes `cnt` processed and check if it equals `n` to determine if all classes can be finished.
