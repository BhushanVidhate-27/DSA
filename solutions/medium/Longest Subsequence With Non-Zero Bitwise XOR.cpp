// Title: Longest Subsequence With Non-Zero Bitwise XOR
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x = 0;
        for(auto i: nums) {
            x ^= i;
        }
        if(x > 0) return n;
        for(int i=0; i<n; i++) {
            y = x ^ nums[i];
        }
    }
        int y = 0;
            if(y > 0) return n-1;
        return 0;
        int n = nums.size();
};
