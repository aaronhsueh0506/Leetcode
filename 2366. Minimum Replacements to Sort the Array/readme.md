## Problem Description

You are given a **0-indexed** integer array `nums`. In one operation you can replace any element of the array with **any two** elements that **sum** to it.

* For example, consider `nums = [5,6,7]`. In one operation, we can replace `nums[1]` with `2` and `4` and convert `nums` to `[5,2,4,7]`.
Return the minimum number of operations to make an array that is sorted in **non-decreasing** order.

#### Example 1:
```plaintext
Input: nums = [3,9,3]
Output: 2
Explanation: Here are the steps to sort the array in non-decreasing order:
- From [3,9,3], replace the 9 with 3 and 6 so the array becomes [3,3,6,3]
- From [3,3,6,3], replace the 6 with 3 and 3 so the array becomes [3,3,3,3,3]
There are 2 steps to sort the array in non-decreasing order. Therefore, we return 2.
```
Example 2:
```plaintext
Input: nums = [1,2,3,4,5]
Output: 0
Explanation: The array is already in non-decreasing order. Therefore, we return 0. 
```

## Constraints

- `1 <= nums.length <= 10^5`
- `1 <= nums[i] <= 10^9`

## Concept
Check from the right side, and if the current value (`cur`) is greater than the next, split `cur` into parts such that:
- \(P_1 + P_2 + P_3 + \ldots + P_k = \text{cur}\) and \(P_1 \leq P_2 \leq \ldots \leq P_k\).
- To minimize the number of operations for `cur`, set the number of splits `k` to be \(\text{cur} / \text{next}\). If \(\text{cur} \% \text{next} == 1\), then increment `k` by 1.
- To maximize \(P_1\), set \(P_1\) to be the integer part of \(\text{cur} / k\).
