// Title: Maximize Active Section with Trade II
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/maximize-active-section-with-trade-ii/

        
        vector<int> res;
        
        };
            return left_len + right_len;
            
            else right_len = end_idx[i + 1] - start[i + 1] + 1;
            if (i + 1 == segR) right_len = max(0, R - start[i + 1] + 1);
            else left_len = end_idx[i - 1] - start[i - 1] + 1;
            
            int right_len = 0;
            int left_len = 0;
            if (i - 1 == segL) left_len = max(0, end_idx[i - 1] - L + 1);
            if (i <= segL || i >= segR) return 0;
            if (type[i] == 0) return 0;
            
        auto eval = [&](int i, int L, int R, int segL, int segR) {
        
        };
