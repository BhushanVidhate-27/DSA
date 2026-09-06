// Title: Two Sum
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/two-sum/

        int n = nums.size();

        // Build the hash table
        for (int i = 0; i < n; i++) {
            numMap[nums[i]] = i;
        }

        // Find the complement
        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (numMap.count(complement) && numMap[complement] != i) {
                return {i, numMap[complement]};
            }
        }

        unordered_map<int, int> numMap;
    vector<int> twoSum(vector<int>& nums, int target) {
class Solution {
public:
