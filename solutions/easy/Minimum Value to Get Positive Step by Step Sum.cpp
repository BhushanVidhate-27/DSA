// Title: Minimum Value to Get Positive Step by Step Sum
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i<nums.size(); i++) {
            sum += nums[i];
            ans = min(sum, ans);
        }
        int ans = 0;
    }
        return 1 - ans;
};
