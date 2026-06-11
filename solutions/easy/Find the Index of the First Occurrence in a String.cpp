// Title: Find the Index of the First Occurrence in a String
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

using namespace std;
class Solution {
public:
    int strStr(string h, string n) {
        size_t pos = h.find(n);
    }
        return (pos == string::npos) ? -1 : pos;
};
