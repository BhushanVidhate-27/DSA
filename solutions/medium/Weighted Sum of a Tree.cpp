// Title: Weighted Sum of a Tree
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/weighted-sum-of-a-tree/

        vector<vector<int>> adj(n, vector<int>(0));

        for (int i = 0; i < n; i++) {
            if (parent[i] != -1) {
                adj[parent[i]].push_back(i);
            }
        }
        int root = -1;
        for (int i = 0; i < n; i++) {
            if (parent[i] == -1) {
                root = i;
                break;
            }
        }
        ll h = (ll)dfsHeight(adj, root, 0);
        ll ans = dfsCalc(adj, nums, 0, h+1, 1);
        cout << h << "..." << ans << endl;
        return ans;
    }
};
