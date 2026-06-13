// Title: Reverse Words in a String
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/reverse-words-in-a-string/

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int i = 0;
        int l = 0;
        int r = 0;
        while(i<n) {
            while(i<n && s[i] == ' ') i++;
        int n = s.size();
            while(i<n && s[i] != ' ')  {
            if(i==n)break;
                s[r++] = s[i++];
            }
            reverse(s.begin()+l, s.begin()+r);
            s[r++] = ' ';
