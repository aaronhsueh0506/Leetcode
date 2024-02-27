## Problem Description

Implement **next permutation**, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

The replacement must be in place and use only constant extra memory.

#### Example 1:
```plaintext
Input: nums = [1,2,3]
Output: [1,3,2]
```
#### Example 2:
```plaintext
Input: nums = [3,2,1]
Output: [1,2,3]

Explanation: Since no permutation is greater and lexicographically higher than [3,2,1], we rearrange it to the lowest possible order.
```
#### Example 3:
```plaintext
Input: nums = [1,1,5]
Output: [1,5,1]
```
## Constraints

- `1 <= nums.length <= 100`
- `0 <= nums[i] <= 100`

## Concept
Find some rules,
// 1 2 3 4 5 -1 2 3 5 4 -(l,r) = (4,5) -nothing to swap
// 1 2 3 4 6 5 -1 2 3 5 4 6 -(l,r) = (4,5) -swap(4,5) , sort others
// 1 2 3 4 6 5 4 -1 2 3 5 4 4 6 -(l,r) = (4,5) -swap(4,5), sort others 

1. find swap left & right
2. left for preiouse one of first greater than next one
3. right for first large than left
4. sort index left+1 to end
