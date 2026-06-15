// Title: Search Insert Position
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/search-insert-position/

    int searchInsert(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size()-1;
        while(st <= end) {
            int mid = st + (end-st)/2;
            if(nums[mid] < target) {
                st = mid + 1;
            }else if(nums[mid] > target) {
                end = mid - 1;
            }else if(nums[mid] == target) {
                return mid;
            }
        }
        return st;
    }
};
