// Title: Find the Highest Altitude
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/find-the-highest-altitude/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAlt = INT_MIN;
        int alt = 0;
        for(int i=0; i<gain.size(); i++) {
            maxAlt = max(alt, maxAlt);
            alt += gain[i];
        }
        maxAlt = max(alt, maxAlt);

        return maxAlt;
    }
};
