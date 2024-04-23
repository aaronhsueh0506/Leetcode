There are n workers. You are given two integer arrays `quality` and `wage` where `quality[i]` is the quality of the `ith` worker and `wage[i] `is the minimum wage expectation for the `ith` worker.

We want to hire exactly `k` workers to form a paid group. To hire a group of `k` workers, we must pay them according to the following rules:

- Every worker in the paid group should be paid in the ratio of their quality compared to other workers in the paid group.
- Every worker in the paid group must be paid at least their minimum wage expectation.
Given the integer `k`, return the least amount of money needed to form a paid group satisfying the above conditions. Answers within `10^-5` of the actual answer will be accepted.

 

#### Example 1:
```plaintext
Input: quality = [10,20,5], wage = [70,50,30], k = 2
Output: 105.00000
Explanation: We pay 70 to 0th worker and 35 to 2nd worker.
```
#### Example 2:
```plaintext
Input: quality = [3,1,10,10,1], wage = [4,8,2,2,7], k = 3
Output: 30.66667
Explanation: We pay 4 to 0th worker, 13.33333 to 2nd and 3rd workers separately.
 ```

## Constraints

- `n == quality.length == wage.length`
- `1 <= k <= n <= 10^4`
- `1 <= quality[i], wage[i] <= 10^4`

## Concept
1. Create a vector to record the wage-quality ratio and quality and sort
2. Use a max-heap start from the lower ratio, and heap store the quality
3. We need to satisfy the larger ratio (new), so update res with qsum * worker.first.
