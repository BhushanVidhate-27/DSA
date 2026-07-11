// Title: Count the Number of Complete Components
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/count-the-number-of-complete-components/

        }

        bitset<51> vis;
        int res = 0;

        for (int i = 0; i < n; i++) {
            bool state = vis.test(i);

            if (!state) {
                int V = 0, D = 0;

                auto dfs = [&](auto& self, int x) -> void {
                    V++;
                    D += A[x].size();
                    vis.set(x);

                    for (auto& state : A[x])
                        if (!vis.test(state))
                            self(self, state);
                };

                dfs(dfs, i);

                res += D == V * (V - 1);
            }
        }

        return res;
    }
};
