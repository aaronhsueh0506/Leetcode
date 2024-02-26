## Problem Description

There are a total of `n` courses you have to take, labeled from `0` to `n-1`.

Some courses may have prerequisites, for example, to take course `0` you have to first take course `1`, which is expressed as a pair: `[0,1]`.

Given the total number of courses and a list of prerequisite pairs, return the ordering of courses you should take to finish all courses.

There may be multiple correct orders, you just need to return one of them. If it is impossible to finish all courses, return an empty array.

#### Example 1:
> Input: numCourses = 2, prerequisites = [[1,0]]
>
> Output: [0,1]
>
> Explanation: There are a total of 2 courses to take. To take course 1 you should have finished course 0. So the correct course order is [0,1].

#### Example 2:
> Input: numCourses = 4, prerequisites = [[1,0],[2,0],[3,1],[3,2]]
>
> Output: [0,1,2,3] or [0,2,1,3]
>
> Explanation: There are a total of 4 courses to take. To take course 3 you should have finished both courses 1 and 2. Both courses 1 and 2 should be taken after you finished course 0. So one correct course order is [0,1,2,3]. Another correct ordering is [0,2,1,3].

#### Example 3:
> Input: numCourses = 1, prerequisites = []
>
> Output: [0]

## Constraints

- `1 <= numCourses <= 2000`
- `0 <= prerequisites.length <= numCourses * (numCourses - 1)`
- `prerequisites[i].length == 2`
- `0 <= ai, bi < numCourses`
- `ai != bi`

## Concept
1. Create a graph to connect each course to its prerequisites.
2. Go through all courses until there are no prerequisites and add them to the result.
3. If visit[i] = -1 is encountered, it indicates a cycle, meaning not all courses can be completed.
- All the pairs `[ai, bi]` are distinct.
