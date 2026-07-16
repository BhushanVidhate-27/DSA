// Title: Sum of GCD of Formed Pairs
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/sum-of-gcd-of-formed-pairs/

            n = gcd(n, max);
        }

        ranges::sort(A);

        long long res = 0;
            max = ::max(max, n);
        for (int i = 0, j = A.size() - 1; i < j; i++, j--)
            res += gcd(A[i], A[j]);

        return res;
    }
};
