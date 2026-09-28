// Title: Maximum Nesting Depth of the Parentheses
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/

class Solution {
public:
    int maxDepth(string s) {
        for(char c:s) {
            if(c == '(') {
                cnt++;
            }
        }
            else if(c == ')') {
                cnt--;
            }
    }
            ans = max(ans, cnt);
        int ans = INT_MIN;
        return ans;
        int cnt = 0;
};
