Given an array of integers `arr`, find the sum of `min(b)`, where b ranges over every (contiguous) subarray of `arr`. Since the answer may be large, return the answer modulo `10^9 + 7`.

#### Example 1:
```plaintext
Input: arr = [3,1,2,4]
Output: 17
Explanation: 
Subarrays are [3], [1], [2], [4], [3,1], [1,2], [2,4], [3,1,2], [1,2,4], [3,1,2,4]. 
Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1.
Sum is 17.
```
#### Example 2:
```plaintext
Input: arr = [11,81,94,43,3]
Output: 444
 ```

## Constraints

- `1 <= arr.length <= 3 * 10^4`
- `1 <= arr[i] <= 3 * 10^4`

## Concept
1. Use stack and encounter the current less than or equals to st.top, compute the number * (L+1) * (R+1) to res.
