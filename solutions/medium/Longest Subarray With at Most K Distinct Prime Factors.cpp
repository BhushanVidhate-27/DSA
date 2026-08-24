// Title: Longest Subarray With at Most K Distinct Prime Factors
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/longest-subarray-with-at-most-k-distinct-prime-factors/

class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int MAX = 100000;

        // Smallest Prime Factor
        vector<int> spf(MAX + 1);
        for (int i = 0; i <= MAX; i++) spf[i] = i;

        for (int i = 2; i * i <= MAX; i++) {
            if (spf[i] == i) {
                for (int j = i * i; j <= MAX; j += i)
                    if (spf[j] == j) spf[j] = i;
            }
        }

        vector<vector<int>> factors(nums.size());

        for (int i = 0; i < nums.size(); i++) {
