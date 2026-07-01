// Title: Find the Safest Path in a Grid
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/find-the-safest-path-in-a-grid/

class Solution {
    static constexpr int dirs[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

public:
    int maximumSafenessFactor(vector<vector<int>>& A) {
        if (A[0][0] || A.back().back())
            return 0;

        int n = A.size();
        queue<pair<int, int>> q;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (A[i][j])
                    q.push({i, j});

