## Problem Description

There are `n` gas stations along a circular route, where the amount of gas at the `i`th station is `gas[i]`.

You have a car with an unlimited gas tank and it costs `cost[i]` of gas to > Travel from the `i`th station to its next `(i + 1)`th station. You begin the journey with an empty tank at one of the gas stations.

Given two integer arrays `gas` and `cost`, return *the starting gas station's index if you can > Travel around the circuit once in the clockwise direction, otherwise return `-1`*. If there exists a solution, it is guaranteed to be unique.

### Examples

#### Example 1:
> Input: gas = [1,2,3,4,5], cost = [3,4,5,1,2]
> 
> Output: 3
> 
> Explanation:
>
> Start at station 3 (index 3) and fill up with 4 unit of gas. Your tank = 0 + 4 = 4
> 
> Travel to station 4. Your tank = 4 - 1 + 5 = 8
> 
> Travel to station 0. Your tank = 8 - 2 + 1 = 7
> 
> Travel to station 1. Your tank = 7 - 3 + 2 = 6
> 
> Travel to station 2. Your tank = 6 - 4 + 3 = 5
> 
> Travel to station 3. The cost is 5. Your gas is just enough to > Travel back to station 3.
>
> Therefore, the answer is 3.

#### Example 2:
> Input: gas = [2,3,4], cost = [3,4,3]
> 
> Output: -1
> 
> Explanation:
>
> You cannot start at station 0 or 1, as there is not enough gas to > Travel to the next station.
>
> Let's start at station 2 and fill up with 4 unit of gas. Your tank = 0 + 4 = 4
> 
> Travel to station 0. Your tank = 4 - 3 + 2 = 3
> 
> Travel to station 1. Your tank = 3 - 4 + 3 = 2
>
> You cannot Travel back to station 2, as it requires 4 unit of gas but you only have 2.
>
> Therefore, you can't Travel around the circuit once no matter where you start.

## Constraints

- `n == gas.length == cost.length`
- `1 <= n <= 10^5`
- `0 <= gas[i], cost[i] <= 10^4`

## Concept
1. Two variables are needed: one to calculate whether adding gas[i] and subtracting cost[i] is greater than or equal to 0, indicating whether a complete circuit is possible.
2. If the second variable is less than 0, it means you cannot start from the current starting point and reach index i. Therefore, change the starting point to i+1.