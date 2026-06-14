// Title: Remove Palindromic Subsequences
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/remove-palindromic-subsequences/

class Solution {
public:
    int removePalindromeSub(string s) {
        string cpy = s;
        reverse(cpy.begin(), cpy.end());
        if(s == cpy)return 1;
        return 2;
    }
};
