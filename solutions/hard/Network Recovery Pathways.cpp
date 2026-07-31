// Title: Network Recovery Pathways
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/network-recovery-pathways/

class Solution {
public:
    int n;

    bool find(int limit, unordered_map<int, vector<pair<int,int>>>& adj,
              vector<bool>& online, vector<int>& topoSort, long long k){

        vector<long long> dist(n, LLONG_MAX);
        dist[0] = 0;

        for(int node : topoSort){
            if(dist[node] == LLONG_MAX) continue;

            for(auto &nxt : adj[node]){
                int nxtNode = nxt.first;
                int cst = nxt.second;

                if(cst < limit) continue;
