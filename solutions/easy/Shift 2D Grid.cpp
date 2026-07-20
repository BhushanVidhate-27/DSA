// Title: Shift 2D Grid
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/shift-2d-grid/


        k = k % n;
        if (!k) return grid;

        auto shift = [&](int i, int j) {
            while (i < j) {
                swap(grid[i / c][i % c], grid[j / c][j % c]);
                i++;
                j--;
            }
        };

        shift(0, n - 1);
        shift(0, k - 1);
        shift(k, n - 1);

        return grid;
    }
};
