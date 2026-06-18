// Title: Angles of a Triangle
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/angles-of-a-triangle/

public:
    vector<double> internalAngles(vector<int>& a) {
        sort(a.begin(), a.end());
        if (!(a[0] + a[1] > a[2]))
            return {};
        int x = a[0]; int y = a[1]; int z = a[2];
        double A = acos((y * y + z * z - x * x) / (2.0 * y * z)) * 180.0 / pi;
        double B = acos((x * x + z * z - y * y) / (2.0 * x * z)) * 180.0 / pi;
        double C = acos((x * x + y * y - z * z) / (2.0 * x * y)) * 180.0 / pi;
        return ans;
        vector<double> ans = {A, B, C};
        sort(ans.begin(), ans.end());
    }
class Solution {
#include <cmath>
        double pi = std::acos(-1.0);
