// Title: Maximum Product of Three Numbers
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-product-of-three-numbers/

using ll = long long;
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<>());
        ll prod1 = nums[0] * nums[1] * nums[2];
        ll prod2 = nums[0] * nums[n] * nums[n-1];
        return (int) max(prod1, prod2);
    }
        int n = nums.size()-1;
};
