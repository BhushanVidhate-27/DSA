// Title: Concatenate Array With Reverse
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/concatenate-array-with-reverse/

class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector<int>nums2(nums.begin(), nums.end());
        for(int i=n-1; i>=0; i--) {
            nums2.push_back(nums[i]);
        }
        return nums2;
    }
};
