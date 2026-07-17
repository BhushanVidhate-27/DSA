// Title: Fibonacci Number
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/fibonacci-number/

class Solution {
public:
    int fib(int n) {
        vector<int>fib(n+1, 0);
        fib[0] = 0;
        fib[1] = 1;

        for(int i=2; i<=n; i++) {
            fib[i] = fib[i-1] + fib[i-2];
        }
    }
        return fib[n];
        if(n == 0 || n == 1)return n;
};
