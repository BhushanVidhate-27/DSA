// Title: Minimum Number of Operations to Move All Balls to Each Box
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/

class Solution {
public:
    vector<int> minOperations(string b) {
        for(int i=0; i<b.size(); i++) {
            for(int j=0; j<b.size(); j++) {
                if(b[j] == '1') {
            }
        }
                    ans[i] += abs(i - j);
                }
        vector<int>ans(b.size(), 0);
        return ans;
    }
};
