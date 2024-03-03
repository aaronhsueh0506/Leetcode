## Problem Description

Design a time-based key-value data structure that can store multiple values for the same key at different time stamps and retrieve the key's value at a certain timestamp.

Implement the `TimeMap` class:

- `TimeMap()` Initializes the object of the data structure.
- `void set(String key, String value, int timestamp)` Stores the key `key` with the value `value` at the given time `timestamp`.
- `String get(String key, int timestamp)` Returns a value such that `set` was called previously, with `timestamp_prev <= timestamp`. If there are multiple such values, it returns the value associated with the largest `timestamp_prev`. If there are no values, it returns `""`.

#### Example 1:
```plaintext
Input
["TimeMap", "set", "get", "get", "set", "get", "get"]
[[], ["foo", "bar", 1], ["foo", 1], ["foo", 3], ["foo", "bar2", 4], ["foo", 4], ["foo", 5]]
Output
[null, null, "bar", "bar", null, "bar2", "bar2"]

Explanation
TimeMap timeMap = new TimeMap();
timeMap.set("foo", "bar", 1); // store the key "foo" and value "bar" along with timestamp = 1
timeMap.get("foo", 1); // return "bar"
timeMap.get("foo", 3); // return "bar" since there is no value corresponding to foo at timestamp 3 and timestamp 2, thus the only value is at timestamp 1 ie "bar"
timeMap.set("foo", "bar2", 4); // store the key "foo" and value "bar2" along with timestamp = 4
timeMap.get("foo", 4); // return "bar2"
timeMap.get("foo", 5); // return "bar2" since "bar2" is the value at the most recent timestamp
```

## Constraints

- `1 <= key.length, value.length <= 100`
- `key` and `value` consist of lowercase English letters and digits.
- `1 <= timestamp <= 10^7`
- All the timestamps `timestamp` of `set` are strictly increasing.
- At most `2 * 10^5` calls will be made to `set` and `get`.

## Concept
1. Use a hash table with a map (which needs sorting) in the format {key, {time, value}}.
2. Use upper_bound with prev to find the previous time (prev_time) that is less than or equal to the given time. If no such time exists, return an empty string ("").
