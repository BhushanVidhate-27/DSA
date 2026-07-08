// Title: Maximum Product After K Increments
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-product-after-k-increments/

    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>>pq(nums.begin(), nums.end());//min-heap
        while(k) {
            int x = pq.top();
        }
            pq.pop();
            pq.push(x+1);
        ll MOD = 1000000007;
        ll prod = 1;
        while(!pq.empty()) {
            prod = (prod * pq.top()) % MOD;
        }
    }
        return prod % MOD;
            k--;
            pq.pop();
};
public:
class Solution {
