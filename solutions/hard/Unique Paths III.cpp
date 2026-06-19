// Title: Unique Paths III
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/unique-paths-iii/

        }
        vis[i][j] = 1; // 0 case
        zc--;          // 0case
        if(grid[i][j] == 2) {
        if(vis[i][j] == 1 || grid[i][j] == -1) {//already vis or obstacle
            return 0;
            return zc == 0;
        }
        int ans = rec(i+1, j, zc, m, n, grid, vis) +
                rec(i-1, j, zc, m, n, grid, vis) +
                rec(i, j+1, zc, m, n, grid, vis) +
                rec(i, j-1, zc, m, n, grid, vis);
        
        vis[i][j] = 0;
        return ans;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m = grid.size();
            vis[i][j] = 0;
