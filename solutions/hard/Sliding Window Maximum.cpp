// Title: Sliding Window Maximum
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/sliding-window-maximum/

        int right = get(mid + 1, end, qi, qj, node * 2 + 2);
        return max(left, right);
    }
};
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i <= n - k; i++) {
            ans.push_back(s.get(0, n - 1, i, i + k - 1, 0));
        }
        return ans;
    }
};
        seg s = seg(nums);
        int left = get(st, mid, qi, qj, node * 2 + 1);
        }
        int mid = st + (end - st) / 2;
