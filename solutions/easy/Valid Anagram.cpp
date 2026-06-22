// Title: Valid Anagram
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int>freq(26, 0);
        for(int i=0; i<s.size(); i++) {
            char c1 = s[i];
            char c2 = t[i];
            freq[c1 - 'a']++;
            freq[c2 - 'a']--;
        }
        for(int i: freq) {
            if(i != 0) return false;
        }
        return true;
    }
};
