// Title: Smallest Divisible Digit Product I
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/smallest-divisible-digit-product-i/

using ll = long long;
class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n; i<n+15; i++) {
            ll digitProd = 1;
            ll d = i;
            while(d) {
                digitProd *= (d%10);
                d = d/10;
            }
            if(digitProd % t == 0) {
                return i;
            }
        }
        return n;
    }
};
