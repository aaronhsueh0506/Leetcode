## Problem Description

You are given a 0-indexed integer array `buses` of length `n`, where `buses[i]` represents the departure time of the `ith` bus. You are also given a 0-indexed integer array `passengers` of length `m`, where `passengers[j]` represents the arrival time of the `jth` passenger. All bus departure times are unique. All passenger arrival times are unique.

You are given an integer `capacity`, which represents the maximum number of passengers that can get on each bus.

When a passenger arrives, they will wait in line for the next available bus. You can get on a bus that departs at x minutes if you arrive at y minutes where `y <= x`, and the bus is not full. Passengers with the earliest arrival times get on the bus first.

More formally when a bus arrives, either:

- If `capacity` or fewer passengers are waiting for a bus, they will all get on the bus, or
- The `capacity` passengers with the earliest arrival times will get on the bus.
Return the latest time you may arrive at the bus station to catch a bus. You cannot arrive at the same time as another passenger.

Note: The arrays `buses` and `passengers` are not necessarily sorted.

#### Example 1:
```plaintext
Input: buses = [10,20], passengers = [2,17,18,19], capacity = 2
Output: 16
Explanation:

The first bus arrives at minute 10 and takes the 1st and 2nd passengers.
The second bus arrives at minute 20 and takes the 3rd and 4th passengers.
You can arrive at minute 16, 15, 14, ..., or 3 to catch a bus.
```
#### Example 2:
```plaintext
Input: buses = [20], passengers = [2,17,18,19], capacity = 2
Output: 0
Explanation:

The first bus arrives at minute 20 and takes the 2nd and 3rd passengers.
The 4th passenger will not have a bus to catch.
You can only arrive before the 1st passenger at minute 2, so the latest you can arrive is minute 1.
```

## Constraints

- `1 <= buses.length <= 10^5`
- `1 <= buses[i], passengers[i] <= 10^9`
- `1 <= capacity <= 10^5`
- All the values of `buses` and `passengers` are unique.

## Concept
1. Determine which passenger will be picked up by the last bus.
2. If the last bus is not full, we can board this bus.
3. If the last bus is full, we need to consider the arrival time of the last passenger and then check the one before it. This is because we **cannot arrive at the same time as another passenger**. If the previous passenger's arrival time is just one minute before the last one's, we need to check even further back.
