# Description
You are given two **non-empty** linked lists representing two non-negative integers. The digits are stored in **reverse order**, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example 1:
https://assets.leetcode.com/uploads/2020/10/02/addtwonumber1.jpg![Uploading image.png…]()


# Concept
1. add l2 val into l1 as cur
2. if cur val us over 10 using mod, and carry (if null need create one node)
3. check next val is null or not
  * l1 and l2 are null, end
  * l1 is null, then concate l2, end
  * l2 is null, create zero node (if cur need carry)
4. cur moove to next
