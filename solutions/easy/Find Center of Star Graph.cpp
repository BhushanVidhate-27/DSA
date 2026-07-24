// Title: Find Center of Star Graph
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/find-center-of-star-graph/

        int a = edges[0][0];
        int b = edges[0][1];
        int c = edges[1][0];
        int d = edges[1][1];
        unordered_map<int, int> freq;
        freq[a]++;freq[b]++;freq[c]++;freq[d]++;
        for(auto& it: freq) {
            if(it.second > 1){
                return it.first;
            }
    int findCenter(vector<vector<int>>& edges) {
public:
class Solution {
        }
        return -1;
    }
};
