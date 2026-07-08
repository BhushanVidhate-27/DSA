// Title: Number of Ways to Buy Pens and Pencils
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/number-of-ways-to-buy-pens-and-pencils/

class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long ans = 0;
        for(int i=0; i<=total/cost1; i++) {
            int pencils = ((total - (cost1*pen)) / cost2)+1;
        }
    }
            ans += pencils;
        return ans;
            int pen = i;
};
