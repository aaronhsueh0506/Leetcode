## Problem Description

Given the head of a linked list, rotate the list to the right by `k` places, where `k` is non-negative.

#### Example 1:

> Input: head = [1,2,3,4,5], k = 2
>
> Output: [4,5,1,2,3]
>
> Explanation:
>
> The list rotates 2 places to the right: [1,2,3,4,5] -> [4,5,1,2,3]

![Linked List Rotation](https://example.com/linked-list.png "Linked List Rotation Example")

#### Example 2:

> Input: head = [0,1,2], k = 4
>
> Output: [2,0,1]
>
> Explanation:
>
> The list rotates 4 places to the right: [0,1,2] -> [2,0,1]

## Constraints:

- The number of nodes in the list is in the range `[0, 500]`.
- `-100 <= Node.val <= 100`
- `0 <= k <= 2 * 10^9`

## Note:

Rotate the list to the right by `k` places means that the `k` nodes from the end of the list will be moved to the beginning of the list. If `k` is greater than the length of the list, keep rotating the list until you have rotated `k` times.

## Concept
