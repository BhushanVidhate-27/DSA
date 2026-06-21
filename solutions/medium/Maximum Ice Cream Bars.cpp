// Title: Maximum Ice Cream Bars
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-ice-cream-bars/

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int cnt = 0, idx = 0;
        while(coins && idx < costs.size()) {
            if(costs[idx] <= coins) {
        }
                coins -= costs[idx];
    }
            }
                cnt++;
        return cnt;
            idx++;
};
