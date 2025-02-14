~Problem Link: https://leetcode.com/problems/valid-parentheses/description/

~Approach: The program uses a stack to validate a given string containing parentheses ((), {}, []). It pushes opening brackets onto the stack and pops when encountering a closing bracket, ensuring that each closing bracket matches its corresponding opening bracket. If at any point an unmatched closing bracket is found or the stack isn't empty at the end, the string is deemed invalid.

~Algorithm Used:
1. Initialize an empty stack
2. Traverse the string character by character:

   a. If an opening bracket is found, push it onto the stack.

   b. If a closing bracket is found, pop from the stack and check if it matches.
4. If the stack is empty at the end, return true; otherwise, return false.

~Time Complexity:

Each character is processed once (either pushed or popped), resulting in an O(n) time complexity, where n is the length of the input string.
