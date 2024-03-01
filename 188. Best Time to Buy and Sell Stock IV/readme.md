## Problem Decsription

You are given an integer array `prices` where `prices[i]` is the price of a given stock on the `i-th` day, and an integer `k`.

Design an algorithm to find the maximum profit. You may complete at most `k` transactions.

**Note:** You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

## Example 1:
```plaintext
Input: k = 2, prices = [2,4,1]
Output: 2
Explanation: Buy on day 1 (price = 2) and sell on day 2 (price = 4), profit = 4-2 = 2.
```

## Example 2:
```plaintext
Input: k = 2, prices = [3,2,6,5,0,3]
Output: 7
Explanation: Buy on day 2 (price = 2) and sell on day 3 (price = 6), profit = 6-2 = 4.
Then buy on day 5 (price = 0) and sell on day 6 (price = 3), profit = 3-0 = 3.
```

## Constraints

- `0 <= k <= 100`
- `0 <= prices.length <= 1000`
- `0 <= prices[i] <= 1000`

## Concept
If handling k transactions, use dynamic programming to update:
 - l[i][j]: The maximum profit from making j transactions up to day i, with the last operation being a buy on day i.
 - g[i][j]: The maximum profit from making j transactions up to day i, without holding stock at the end of day i.
 - Update rules:
    * l[i][j] = max(g[i-1][j-1] + max(diff, 0), l[i-1][j] + diff), where diff is the difference between prices[i] and prices[i-1].
    * g[i][j] = max(g[i-1][j], l[i][j]), choosing the maximum profit between not trading on day i or selling on day i.
