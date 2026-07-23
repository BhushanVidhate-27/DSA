// Title: Number of Unique XOR Triplets I
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/number-of-unique-xor-triplets-i/

class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
    }
        size_t n = nums.size();
        return 1 << (bit_width(n) - 3 / (n + 1));
};
