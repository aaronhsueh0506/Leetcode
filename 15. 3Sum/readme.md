## Description

Given an integer array `nums`, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j`, `i != k`, and `j != k`, and `nums[i] + nums[j] + nums[k] == 0`.

Notice that the solution set must not contain duplicate triplets.

### Example 1:
```plaintext
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
- The numbers at indices `(0, 1, 2)` are `-1, 0, 1` which sum to `0`.
- The numbers at indices `(0, 3, 4)` are `-1, 2, -1` which also sum to `0`.
- Notice that the solution set must not contain duplicate triplets.
```
### Example 2:
```plaintext
Input: nums = []
Output: []
Explanation: There are no elements in `nums`, so no triplets can be formed.
```
### Example 3:
```plaintext
Input: nums = [0]
Output: []
Explanation: The only element in `nums` is `0`, so no triplets that sum to `0` can be formed.
```
## Constraints

- `0 <= nums.length <= 3000`
- `-10^5 <= nums[i] <= 10^5`

## Notes

- Try to come up with a solution that does not use brute force.
- Consider sorting the array as a pre-processing step.
- Think about how you can avoid including duplicate triplets in your solution.

## Concepts
1. Sort the array first, and then use two pointers to find the answer.
2. If the sum equals 0, record the answer.
3. If the sum is greater than 0, reduce the right boundary.
4. Skip the same value if the next value is the same as the current value.
5. 
