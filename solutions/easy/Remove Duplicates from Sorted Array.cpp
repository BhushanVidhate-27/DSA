// Title: Remove Duplicates from Sorted Array
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s(nums.begin(), nums.end());
        return nums.size();
    }
#include<set>
using namespace std;
        nums.clear();
        nums.assign(s.begin(), s.end());
};
