~Problem Link: https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/description/

~Approach: The problem requires counting the number of pairs (i,j) where i<j and 𝑛𝑢𝑚𝑠[𝑖] + 𝑛𝑢𝑚𝑠[𝑗] < 𝑡𝑎𝑟𝑔𝑒t, The approach sorts the array first, ensuring that smaller numbers are considered first. Then, a nested loop iterates through all possible pairs, checking if their sum is less than the target and incrementing the count accordingly.

~Algorithm Used:

1. Sorting: The array is sorted in ascending order to facilitate easier pair selection.

2. Brute Force with Two Loops: The outer loop picks the first element of the pair, and the inner loop picks the second element, ensuring i<j.

3. Comparison & Counting: Each pair is checked against the given condition nums[i]+nums[j] < target, and if true, the count is incremented.

~Time Complexity:

1. Sorting takes O(nlogn).
2. The nested loops iterate over all possible pairs, which takes O(n^2).

Hence, the overall time complexity is O(n^2) due to the dominant nested loop.
