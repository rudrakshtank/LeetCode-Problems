~Problem Link: https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/

~Approach: The function repeatedly finds and removes all occurrences of the substring part from the string s until part is no longer found. This is achieved using s.find(part), which locates the first occurrence of part, and s.erase(pos, part.length()), which removes it from s.

~Algorithm Used:
1. The algorithm follows an iterative greedy approach where it keeps searching for part from the start of the string and removes it until no more occurrences are left. This ensures that all contiguous instances of part are removed efficiently.

~Time Complexity:

1. s.find(part) takes O(N) in the worst case.

2. s.erase(pos, part.length()) takes O(N) as shifting characters may be required.

3. Since the worst case may involve removing part multiple times (approximately N / M times, where M is the length of part), the overall complexity is O(N * (N/M)) ≈ O(N²) in the worst case.
