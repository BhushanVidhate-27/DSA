// Title: Check Divisibility by Digit Sum and Product
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/

    }
    ll dprod(int n) {
        ll prod = 1;
        while(n) {
            prod *= n%10;
            n = n/10;
        }
        return prod;
    }
        return sum;
    bool checkDivisibility(int n) {
        ll ds = dsum(n);
        ll dp = dprod(n);
        return n % s == 0;
    }
        ll s = dp + ds;
};
