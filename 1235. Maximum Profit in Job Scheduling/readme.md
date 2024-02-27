## Problem Description

We have `n` jobs, where every job is scheduled to be done from `startTime[i]` to `endTime[i]`, obtaining a profit of `profit[i]`.

You're given the `startTime`, `endTime` and `profit` arrays, you need to Output the maximum profit you can take such that there are no two jobs in the subset with overlapping time range.

If you choose a job that ends at time `X` you will be able to start another job that starts at time `X`.

### Example 1:

![Example 1 Image](https://assets.leetcode.com/uploads/2019/10/10/sample1_1584.png)
```plaintext
Input: startTime = [1,2,3,3], endTime = [3,4,5,6], profit = [50,10,40,70]
Output: 120
Explanation: The subset chosen is the first and fourth job.
Time range [1-3]+[3-6] , we get profit of 120 = 50 + 70.
```
### Example 2:

![Example 2 Image](https://assets.leetcode.com/uploads/2019/10/10/sample22_1584.png)
```plaintext
Input: startTime = [1,2,3,4,6], endTime = [3,5,10,6,9], profit = [20,20,100,70,60]
Output: 150
Explanation: The subset chosen is the first, fourth, and fifth job.
Time range [1-3]+[3-6]+[6-9], we get profit of 150 = 20 + 70 + 60.
```
### Example 3:
```plaintext
Input: startTime = [1,1,1], endTime = [2,3,4], profit = [5,6,4]
Output: 6
```

## Constraints

- `1 <= startTime.length == endTime.length == profit.length <= 5 * 10^4`
- `1 <= startTime[i] < endTime[i] <= 10^9`
- `1 <= profit[i] <= 10^4`

## Concept
1. Start from the job with the earliest endTime.
2. Use a map to store endTime and corresponding profit, which automatically sorts by endTime.
3. Use upper_bound(startTime) to find the earliest finish time that is greater than the current job's start time. With prev, obtain the profit before the current job's startTime, then add the profit of this job.
4. If current_profit is greater than the last entry in the map (dp.rbegin()->second), update or add dp[endTime] = current_profit.
