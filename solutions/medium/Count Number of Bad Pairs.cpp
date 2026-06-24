// Title: Count Number of Bad Pairs
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/count-number-of-bad-pairs/

        for (int pos = 0; pos < nums.size(); pos++) {
            int diff = pos - nums[pos];
            // Count of previous positions with same difference

            int goodPairsCount = diffCount[diff];

            // Total possible pairs minus good pairs = bad pairs
            badPairs += pos - goodPairsCount;

            // Update count of positions with this difference
            diffCount[diff] = goodPairsCount + 1;
        }

        return badPairs;
    }
};
        unordered_map<int, int> diffCount;

        long long badPairs = 0;
    long long countBadPairs(vector<int>& nums) {
public:
class Solution {
