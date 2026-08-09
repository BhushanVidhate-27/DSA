// Title: Weighted Sum of a Tree
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/weighted-sum-of-a-tree/

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
