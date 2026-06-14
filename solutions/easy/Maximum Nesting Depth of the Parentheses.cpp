// Title: Maximum Nesting Depth of the Parentheses
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/

class Solution {
public:
    int maxDepth(string s) {
        int pc = 0;
        int ans = INT_MIN;
        for(char c: s) {
            if(c == '(') pc++;
            ans = max(pc, ans);
            if(c == ')') pc--;
        }
        return ans;
    }
};
