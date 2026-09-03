// Title: Construct Uniform Parity Array II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/construct-uniform-parity-array-ii/

class Solution {
public:
    bool uniformArray(vector<int>& A) {
        int xmin = A[0];
        bool odd = 0;

        for (auto& x : A) {
            xmin = min(xmin, x);
            odd |= x & 1;
        }

        return (xmin & 1) == odd;
    }
};
