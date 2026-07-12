// Title: Reverse Pairs
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/reverse-pairs/

    }
    int divide(vector<int>& nums, int st, int end) {
        if (st < end) {
        return ans;
        }
            ans += right - (mid+1);
            }
            int mid = st + (end - st) / 2;
            int l = divide(nums, st, mid);
            int r = divide(nums, mid + 1, end);

            int c = cnt(nums, st, mid, end);
            merge(nums, st, mid, end);
            return l + r + c;
        }
        return 0;
    }
