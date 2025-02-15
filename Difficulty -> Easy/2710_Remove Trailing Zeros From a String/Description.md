~Problem Link: https://leetcode.com/problems/remove-trailing-zeros-from-a-string/description/

~Approach: The function removes trailing zeros from a given string representation of a number. It repeatedly checks if the last character of the string is '0' and removes it until a non-zero digit is encountered.

~Algorithm Used:

The algorithm follows a greedy approach, where it iteratively trims the last character of the string if it is '0'. This is achieved using the erase() function, which reduces the string size by one in each iteration.

~Time Complexity:
The worst-case time complexity is O(N), where N is the length of the input string. This occurs when all characters in the string are zeros, requiring N iterations. Each erase() operation takes O(1) time on average, leading to an overall O(N) complexity.
