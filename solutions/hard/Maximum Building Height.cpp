// Title: Maximum Building Height
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-building-height/

                restrictions[i + 1][1] +
                (restrictions[i + 1][0] - restrictions[i][0])
            );
        }

        long long ans = 0;

        for (int i = 1; i < m; i++) {
            long long x1 = restrictions[i - 1][0];
            long long h1 = restrictions[i - 1][1];

            long long x2 = restrictions[i][0];
            long long h2 = restrictions[i][1];

            long long d = x2 - x1;

            ans = max(ans, (h1 + h2 + d) / 2);
        }

        return (int)ans;
    }
};
