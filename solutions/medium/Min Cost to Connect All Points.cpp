// Title: Min Cost to Connect All Points
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/min-cost-to-connect-all-points/

            if (vis[u])continue;
            int u = x.second;
            int wt = x.first;
            pq.pop();
            auto x = pq.top();
        while (!pq.empty()) { // pick smallest
        pq.push({0, 0});      // wt, vertex => sort by weight
            pq;
                       greater<pair<int, int>>>
        priority_queue<pair<int, int>, vector<pair<int, int>>,
        int ans = 0;
        vector<bool> vis(n, false);
        vector<int> minDist(n, INT_MAX);

        int n = graph.size();
    int minCostConnectPoints(vector<vector<int>>& graph) {
public:
            vis[u] = 1;
            ans += wt;
