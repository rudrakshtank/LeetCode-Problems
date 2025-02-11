class Solution {
public:
    string removeOccurrences(string s, string part) {
        size_t pos = s.find(part);
        while ((pos = s.find(part)) != string::npos) {
            s.erase(pos, part.length());
        }
        return s; 
    }
};
