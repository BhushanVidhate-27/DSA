// Title: Count Subarrays With Majority Element I
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/count-subarrays-with-majority-element-i/

    int f(int i, int j, int st, int end, int node) {
        if(st > j || end < i ) {
        int mid = st + (end - st)/2;

        build(st, mid, 2*node+1, nums, target);
        build(mid+1, end, 2*node+2, nums, target);

        t[node] = t[2*node+1] + t[2*node+2];
    }
    void build(int st, int end, int node, vector<int>& nums, int target) {
        if(st == end) {
            t[node] = (nums[st] == target);
            return;
        }

        build(0, nums.size()-1, 0, nums, target);
    }
        t.resize(4 * nums.size());
            return 0;
        } else if(st >= i && end <= j) {
            return t[node];
        } else {
            int mid = st + (end - st)/2;
