// Title: Find Missing Elements
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/find-missing-elements/

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_set<int>s(nums.begin(), nums.end());
        vector<int>rm;
        int n = nums.size();
        for(int i=nums[0]; i<nums[n-1]; i++) {
            if(s.find(i) == s.end()) {
                rm.push_back(i);
            }
        }
        return rm;

    }
};
