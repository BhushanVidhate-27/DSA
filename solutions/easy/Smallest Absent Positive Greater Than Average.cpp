// Title: Smallest Absent Positive Greater Than Average
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/smallest-absent-positive-greater-than-average/

    int smallestAbsent(vector<int>& nums) {
        unordered_set<int>s;
        int sum = 0;
        int n = nums.size();
        for(int i: nums) {
            sum += i;
            s.insert(i);
        }
        int avg = sum / n;
        while(1) {
            if(s.find(ans) == s.end()) return ans;
        int ans = avg + 1;
        if(avg < 0) ans = 1;
            ans++;
        }
        return -1;
    }
};
