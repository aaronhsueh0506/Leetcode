## Problem Decsription

Implement a SnapshotArray that supports the following interface:

* `SnapshotArray(int length)` initializes an array-like data structure with the given length. **Initially, each element equals 0**.
* `void set(index, val)` sets the element at the given `index` to be equal to `val`.
* `int snap()` takes a snapshot of the array and returns the snap_id: the total number of times we called `snap()` minus `1`.
* `int get(index, snap_id)` returns the value at the given `index`, at the time we took the snapshot with the given `snap_id`.
 

#### Example 1:
```plaintext
Input: ["SnapshotArray","set","snap","set","get"]
[[3],[0,5],[],[0,6],[0,0]]
Output: [null,null,0,null,5]
Explanation: 
SnapshotArray snapshotArr = new SnapshotArray(3); // set the length to be 3
snapshotArr.set(0,5);  // Set array[0] = 5
snapshotArr.snap();  // Take a snapshot, return snap_id = 0
snapshotArr.set(0,6);
snapshotArr.get(0,0);  // Get the value of array[0] with snap_id = 0, return 5
```

## Constraints

- `1 <= length <= 5 * 10^4`
- `0 <= index < length`
- `0 <= val <= 10^9`
- `0 <= snap_id <` (the total number of times we call `snap()`)
- At most `5 * 10^4` calls will be made to `set`, `snap`, and `get`.

## Concept
1. Originally, there is a 1-dimensional array indexed with a time axis snapid. If at a given `snapid`, an index is not assigned a new value, it retains the same value as before.
2. Given that most values remain the same across different snapshots, a hash table or map is used to record changes. The index serves as the first key, and it maps to another map that records snapid to value changes.
3. Within `m[index]`, the values from `snapid_prev` to `snapid_cur-1` remain the same if `snapid_cur` does not exist. Therefore, `upper_bound(snapid)` combined with prev is used to find the value that is `<= snapid`.
