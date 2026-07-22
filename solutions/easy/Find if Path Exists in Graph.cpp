// Title: Find if Path Exists in Graph
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/find-if-path-exists-in-graph/

        vis[src] = 1;
        for(int v : adjList[src]) {
            if(!vis[v]) {
        }
                if(dfs(vis, adjList, v, dest))return true;
            }
        if(src == dest) return true;
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int src, int dest) {
        if(src == dest)return true;
        vector<vector<int>> adjList(n);
        vector<bool>vis(n, 0);
    bool dfs(vector<bool>& vis, vector<vector<int>>& adjList, int src, int dest) {
public:
class Solution {
