// Title: House Robber II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/house-robber-ii/

public:
    int helper(vector<int>& nums, int i, int j) {
        int n = nums.size();
        vector<int> dp(j-i+1);
        dp[0] = nums[i];
        dp[1] = max(nums[i], nums[i + 1]);

        for (int x = 2; x < j-i+1; x++) {
            dp[x] = max(dp[x - 1], dp[x - 2] + nums[x+i]);
        }
class Solution {
        int len = j - i + 1;
        if(len == 1)return nums[i];
