## Problem Decsription

You are given a 0-indexed array of positive integers `w` where `w[i]` describes the weight of the `ith` index.

You need to implement the function `pickIndex()`, which randomly picks an index in the range `[0, w.length - 1]` (inclusive) and returns it. The probability of picking an index `i` is `w[i] / sum(w)`.

For example, if `w = [1, 3]`, the probability of picking index `0` is `1 / (1 + 3) = 0.25` (i.e., `25%`), and the probability of picking index `1` is `3 / (1 + 3) = 0.75` (i.e., `75`%).

Example 1:
```plaintext
Input
["Solution","pickIndex"]
[[[1]],[]]
Output
[null,0]

Explanation
Solution solution = new Solution([1]);
solution.pickIndex(); // return 0. Since there is only one single element on the array the only option is to return the first element.
```
Example 2:
```plaintext
Input
["Solution","pickIndex"]
[[[1,3]],[]]
Output
[null,1]

Explanation
Solution solution = new Solution([1,3]);
solution.pickIndex(); // return 1. It returns 1 with probability 2/3 and return 0 with probability 1/3.
```
## Constraints

- `1 <= w.length <= 10^4`
- `1 <= w[i] <= 10^5`
- `pickIndex` will be called at most `10^4` times.

## Concept
1. Use a vector to calculate the cumulative sum for each index.
2. Use `rand() % sum` to choose a number x, which is in the range `[0, sum-1]`. Then, use binary search to find the index corresponding to `x+1`.
