// Title: Maximum Count of Positive Integer and Negative Integer
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        return max(neg, pos);
    }
        int neg = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();
        int pos = nums.end() - upper_bound(nums.begin(), nums.end(), 0);
};
