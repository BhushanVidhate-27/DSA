// Title: Angle Between Hands of a Clock
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/angle-between-hands-of-a-clock/

class Solution {
public:
    double angleClock(int H, int M) {
        return (double)min(diff, 360-diff);
    }
        double h = (30 * H) + (0.5 * M);
        double m = 6 * M;
        double diff = abs(h-m);
};
