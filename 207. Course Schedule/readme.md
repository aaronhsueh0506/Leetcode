## Problem Description

There are a total of `numCourses` courses you have to take, labeled from `0` to `numCourses-1`. Some courses may have prerequisites, for example to take course `0` you have to first take course `1`, which is expressed as a pair: `[0,1]`.

Given the total number of courses and a list of prerequisite pairs, is it possible for you to finish all courses?

#### Example 1:
> Input: numCourses = 2, prerequisites = [[1,0]]
> 
> Output: true
> 
> Explanation: There are a total of 2 courses to take. To take course 1 you should have finished course 0. So it is possible.

#### Example 2:
> Input: numCourses = 2, prerequisites = [[1,0],[0,1]]
> 
> Output: false
> 
> Explanation: There are a total of 2 courses to take. To take course 1 you should have finished course 0, and to take course 0 you should also have finished course 1. Hence, it is not possible.

## Constraints:

- `1 <= numCourses <= 10^5`
- `0 <= prerequisites.length <= 5000`
- `prerequisites[i].length == 2`
- `0 <= ai, bi < numCourses`
- All the pairs prerequisites[i] are unique.

## Notes

- The given graph is not necessarily a DAG (Directed Acyclic Graph).
- You may assume that there are no duplicate edges in the input prerequisites.

## Concepts
1. Use a 2-D vector or hash map of vectors to represent the relationships between courses.
2. Initialize the visited courses.
3. Perform DFS, traversing through the course and marking it as visited.
4. If a course is marked as -1, it indicates a cycle, and the function should return false.
