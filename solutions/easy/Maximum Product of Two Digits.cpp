// Title: Maximum Product of Two Digits
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-product-of-two-digits/

class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        sort(s.begin(), s.end());
        int x = stoi(s);
        int a = x%10;
        return a*b;
    }
        x /= 10;
        int b = x%10;
};
