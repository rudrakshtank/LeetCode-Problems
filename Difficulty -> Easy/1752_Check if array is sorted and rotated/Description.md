~Problem Link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

~Approach: The goal is to check whether the given array was originally sorted in non-decreasing order and then rotated some number of times. The key observation is that in a valid rotated sorted array, there should be at most one point where the order is violated (i.e., an element is greater than the next element).

~Algorithm Used:

1. Initialize a counter count to track the number of violations.
2. Iterate through the array, comparing each element nums[i] with the next element nums[(i + 1) % n] (using modulo to handle circular comparison).
3. Condition:

   a. If nums[i] > nums[(i + 1) % n], increment count.

   b. If there is more than one such violation, return false. Otherwise, return true.

~Time Complexity:

1. The algorithm runs a single pass through the array, performing a constant amount of work per element.
   
Hence, the time complexity is O(n), where n is the size of the array.
