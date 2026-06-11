// Title: Maximum Total Subarray Value I
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-total-subarray-value-i/

class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long max_val = *max_element(nums.begin(), nums.end());
    }
        long long min_val = *min_element(nums.begin(), nums.end());
        return ans * k;
        long long ans = max_val - min_val;
};
