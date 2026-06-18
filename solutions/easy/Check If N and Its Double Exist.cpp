// Title: Check If N and Its Double Exist
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/check-if-n-and-its-double-exist/

#include<unordered_set>
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int>s;
        for(int i: arr) {
            if(s.count(i*2)) return true;
        }
    }
        return false;
            if(s.count(i/2) && i % 2 == 0) return true;
            s.insert(i);
};
