~Problem Link: https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/description/

~Approach: The problem requires counting elements in the array that are not divisible by 3. The approach involves iterating through the array and checking each element’s divisibility. If an element is not divisible by 3, it is counted towards the result.

~Algorithm:

1. Initialize a counter left_no to 0.
2. Iterate through the array.
3. For each element, check if it is not divisible by 3.
4. If true, increment left_no.

Return left_no as the final result.

~Time Complexity:

The algorithm performs a single pass through the array, checking each element individually. Since each check is an O(1) operation, the overall time complexity is O(n), where n is the size of the array.
