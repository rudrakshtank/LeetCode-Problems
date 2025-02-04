~Problem Link: https://leetcode.com/problems/maximum-ascending-subarray-sum/description/

~Algorithm Used: The problem is solved using a greedy approach by iterating through the array while maintaining a running sum (currentsum) of an ascending subarray. The logic is as follows:

1. Traverse the array while keeping track of the sum of the current ascending subarray.

2. If the current element is greater than the previous element, add it to currentsum.

3. Otherwise, reset currentsum to start a new subarray with the current element.

4. Update maxsum whenever currentsum exceeds its value.

Return maxsum as the result.

~Time Complexity:

1. The algorithm processes each element exactly once in a single pass through the array.
   
Since each operation inside the loop runs in constant time O(1), the overall time complexity is O(n), where n is the size of the array.
