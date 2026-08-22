// Title: Maximize Pair Strength Using GCD
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/maximize-pair-strength-using-gcd/

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                ll p = 1LL * nums[i] * nums[j];
                ll curr = p / gcd(nums[i], nums[j]);
                ms = max(ms, curr);
            }
        }

        return ms;
    }

        ll ms = LLONG_MIN;
        int n = nums.size();
    long long maxPairStrength(vector<int>& nums) {

};
    }
        return a*a;
        }
            a = t;
