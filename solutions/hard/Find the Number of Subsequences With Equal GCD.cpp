// Title: Find the Number of Subsequences With Equal GCD
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/find-the-number-of-subsequences-with-equal-gcd/

        // Put in seq2
        int ng2 = (g2 == 0) ? nums[idx] : gcd(g2, nums[idx]);
        ans = (ans + solve(idx + 1, g1, ng2, nums)) % MOD;

        return ans;
    }

    int subsequencePairCount(vector<int>& nums) {
        n = nums.size();
        memset(dp, -1, sizeof(dp));
        return solve(0, 0, 0, nums);
    }
};
