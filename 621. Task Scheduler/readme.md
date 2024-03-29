## Problem Description

Given a characters array `tasks`, representing the tasks a CPU needs to do, where each letter represents a different task. Tasks could be done in any order. Each task is done in one unit of time. For each unit of time, the CPU could complete either one task or just be idle.

However, there is a non-negative integer `n` that represents the cooldown period between **two same tasks** (the same letter in the array), that is that there must be at least `n` units of time between any two same tasks.

Return *the least number of units of times that the CPU will take to finish all the given tasks*.

#### Example 1:
```plaintext
Input: tasks = ["A","A","A","B","B","B"], n = 2
Output: 8
Explanation:
A -> B -Idle -> A -> B -Idle -> A -> B
There is at least 2 units of time between any two same tasks.
```
#### Example 2:
```plaintext
Input: tasks = ["A","A","A","B","B","B"], n = 0
Output: 6
Explanation:
On this case any permutation of size 6 would work since n = 0.
["A","A","A","B","B","B"]
["A","B","A","B","A","B"]
["B","B","B","A","A","A"]
...
And so on.
```
#### Example 3:
```plaintext
Input: tasks = ["A","A","A","A","A","A","B","C","D","E","F","G"], n = 2
Output: 16
Explanation:
One possible solution is
A -> B -> C -> A -> D -> E -> A -> F -> G -> A -Idle -Idle -> A -Idle -Idle -> A
```
## Constraints

- `1 <= task.length <= 10^4`
- `tasks[i]` is upper-case English letter.
- The integer `n` is in the range `[0, 100]`.

## Concept
1. For a normal case, if 'A' appears the most frequently, the answer will be in the form of 'AXXAXXA', which is calculated as (m-1)*(n+1) + 1.
2. For multiple most frequent cases, if 'A' and 'B' appear the most frequently, the answer will be 'ABXXABXXAB', calculated as (m-1)*(n+1) + number of most frequent cases.
3. If (m-1) becomes 0, the equation will fail. Therefore, use max(length, equation) to handle some special cases.
