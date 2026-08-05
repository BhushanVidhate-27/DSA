// Title: Remove Methods From Project
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/remove-methods-from-project/


        for (auto &it : invocations) {
            int u = it[0];
            int v = it[1];

            if (!vis[u] && vis[v]) {

        vector<int> rem;
        vector<int> vis(n, 0);
        dfs(k, invoke, vis);
            invoke[u].push_back(v);
        }

        for (auto &it : invocations) {
            int u = it[0];
            int v = it[1];
                for (int i = 0; i < n; i++)
                    rem.push_back(i);
                return rem;
            }
        }

        for (int i = 0; i < n; i++) {
            if (!vis[i])
                rem.push_back(i);
        }

        return rem;
    }
};
