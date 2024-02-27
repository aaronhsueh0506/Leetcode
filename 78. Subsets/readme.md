## Problem Description

Given an integer array `nums` of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

#### Example 1:
```plaintext
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
```
#### Example 2:
```plaintext
Input: nums = [0]
Output: [[],[0]]
```
## Constraints

- `1 <= nums.length <= 10`
- `-10 <= nums[i] <= 10`
- All the numbers of `nums` are **unique**.

## Concept
1. create an empty 2d array
2. add index_i to back, and add new number to back
3. 
