// Title: Trapping Rain Water
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/trapping-rain-water/

        for(int i=n-2; i>=0; i--) {
            ng[i] = max(ng[i+1], nums[i]);
        }
        vector<int>ps(n, 0);
        ps[0] = nums[0];
        for(int i=1; i<n; i++) {
            ps[i] = max(ps[i-1], nums[i]);
        }
        int ans = 0;
        for(int i=1; i<n; i++) {
            ans += min(ng[i], ps[i]) - nums[i];
        }
        return ans;
    }
};
