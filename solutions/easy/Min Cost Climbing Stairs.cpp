// Title: Min Cost Climbing Stairs
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/min-cost-climbing-stairs/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        dp[0] = cost[0];
        for(int i=2; i<cost.size(); i++) {
        }
                dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
    }
        return min(dp[n-1], dp[n-2]);
        vector<int>dp(n+1);
        dp[1] = cost[1];
};
