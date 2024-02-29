## Problem Description

Find the **kth largest** element in an unsorted array. Note that it is the kth largest element in the sorted order, not the kth distinct element.

#### Example 1:
```plaintext
Input: [3,2,1,5,6,4] and k = 2
Output: 5
```

#### Example 2:
```plaintext
Input: [3,2,3,1,2,4,5,5,6] and k = 4
Output: 4
```

## Constraints

- `1 <= k <= array's length`
- `1 <= array.length <= 10^4`
- `-10^4 <= array[i] <= 10^4`

## Concept
1. In quick sort, a pivot is chosen such that elements on the left side of the pivot are greater than the pivot, and those on the right side are less than the pivot.
2. There may be multiple values equal to the pivot. Since l may become n, which could lead to an array index overflow, returning r is better. This is because indices less than r are guaranteed to be greater than or equal to the pivot.
