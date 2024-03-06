## Problem Description

Given an integer `n`, return all the **strobogrammatic numbers** that are of length `n`. You may return the answer in **any order**.

A **strobogrammatic number** is a number that looks the same when rotated `180` degrees (looked at upside down).

 

#### Example 1:
```plaintext
Input: n = 2
Output: ["11","69","88","96"]
```
#### Example 2:
```plaintext
Input: n = 1
Output: ["0","1","8"]
``` 

## Constraints
- `1 <= n <= 14`

## Concept
1. For r odd n, the middle needs to include "0", "1", "8".
2. For even n, the middle should be an empty string "".
3. For each item in res, add pairs ("0", "0"), ("1", "1"), ("6", "9"), ("8", "8"), and ("9", "6") to each side.
