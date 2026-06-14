// Title: Minimum Positive Sum Subarray
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-positive-sum-subarray/

class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int m = INT_MAX;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            int currSum = 0;
            for(int j=i; j<n; j++) {
                currSum += nums[j];
        }
                if(j-i+1 > r)break;
                if(j-i+1 < l)continue;
                if(currSum > 0){
                   m = min(m, currSum);
            }
    }
                }


        return m == INT_MAX ? -1 : m;
};
