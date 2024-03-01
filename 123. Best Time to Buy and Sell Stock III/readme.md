## Problem Decsription

You are given an array `prices` where `prices[i]` is the price of a given stock on the `i-th` day.

Design an algorithm to find the maximum profit. You may complete at most **two transactions**.

**Note:** You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

#### Example 1:
```plaintext
Input: prices = [3,3,5,0,0,3,1,4]
Output: 6
Explanation: Buy on day 4 (price = 0) and sell on day 6 (price = 3), profit = 3-0 = 3.
Then buy on day 7 (price = 1) and sell on day 8 (price = 4), profit = 4-1 = 3.
```

#### Example 2:
```plaintext
Input: prices = [1,2,3,4,5]
Output: 4
Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5-1 = 4.
Note that you cannot buy on day 1, buy on day 2 and sell them later, as you are
engaging multiple transactions at the same time. You must sell before buying again.
```

#### Example 3:
```plaintext
Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transaction is done, i.e., max profit = 0.
```

## Constraints

- `1 <= prices.length <= 10^5`
- `0 <= prices[i] <= 10^5`

## Concept
If handling only 2 transactions, use two vectors to record the first and second trades:
 - First: Find prices[i] - minPrice for every day, where minPrice is updated daily to the lowest price seen so far.
 - Second: Find maxPrice - prices[i] from the last day backward, where maxPrice is updated daily to the highest price seen from the end backward.
 - Finally: The sum leftPrice[i] + rightPrice[i] represents the maximum profit from two transactions.
 - 
If handling k transactions, use dynamic programming to update:
 - l[i][j]: The maximum profit from making j transactions up to day i, with the last operation being a buy on day i.
 - g[i][j]: The maximum profit from making j transactions up to day i, without holding stock at the end of day i.
 - Update rules:
    * l[i][j] = max(g[i-1][j-1] + max(diff, 0), l[i-1][j] + diff), where diff is the difference between prices[i] and prices[i-1].
    * g[i][j] = max(g[i-1][j], l[i][j]), choosing the maximum profit between not trading on day i or selling on day i.
