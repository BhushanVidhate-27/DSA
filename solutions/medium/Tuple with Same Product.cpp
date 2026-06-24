// Title: Tuple with Same Product
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/tuple-with-same-product/

        }
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                int p = nums[i] * nums[j];
                if (s.find(p) == s.end()) {
                    s[p] = 0;
                }
                s[p]++;
            }
        }
        int ans = 0;
        for (auto& x : s) {
            int k = x.second;
#include <unordered_map>
class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> s;
    }

        return ans;
            ans += (k * (k - 1) / 2) * 8;
};
