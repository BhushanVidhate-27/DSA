// Title: Number of ZigZag Arrays I
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/number-of-zigzag-arrays-i/


            long long pref = 0;

            for (int i = 0; i < m; i++) {
                int old = dp[i];

                dp[i] = pref;

                pref = (pref + old) % MOD;
            }
        }
            reverse(dp.begin(), dp.end());

        for (int len = 2; len <= n; len++) {
    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;

        vector<int> dp(m, 1);
class Solution {
public:
    static constexpr int MOD = 1000000007;

