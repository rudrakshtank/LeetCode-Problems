~Problem Link: https://leetcode.com/problems/concatenation-of-array/description/

~Approach: The function getConcatenation takes an input vector nums and appends its elements to itself to create a new vector of twice the original size. The original size of the vector is stored in a, and a loop iterates over the first a elements, using push_back to append each element to the end of nums. This results in nums being extended to twice its original length.

~Algorithm Used:

1. Store the size of nums in variable a.

2. Iterate from 0 to a - 1.

3. In each iteration, append the current element nums[i] to nums using push_back.

Return the modified nums, which now contains two copies of the original elements.

~Time Complexity: 

Using vector<int> ans(2 * a) and directly copying elements would reduce the complexity to O(n).
