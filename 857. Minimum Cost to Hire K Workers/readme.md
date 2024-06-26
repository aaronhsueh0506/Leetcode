There are n workers. You are given two integer arrays `quality` and `wage` where `quality[i]` is the quality of the `ith` worker and `wage[i]` is the minimum wage expectation for the `ith` worker.

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
1. Create a vector to record the wage-quality ratio and quality, then sort it.
2. Use a max-heap starting from the lowest ratio; the heap will store the quality values.
3. To satisfy the higher ratio (new), update the result with qsum * worker.first.
4. While the ratio (worker.first) is fixed, attempt to find the minimum total quality sum. Even if worker.second is dropped from the heap, the ratio will not exceed previous values, thus the result will not be updated.
