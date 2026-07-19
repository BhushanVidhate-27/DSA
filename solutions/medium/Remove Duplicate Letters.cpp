// Title: Remove Duplicate Letters
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/remove-duplicate-letters/

            vis[(s[i] - 'a')] = 1;
            while (!stk.empty() && s[i] < stk.top() && lo[stk.top() - 'a'] > i) {
                vis[(stk.top() - 'a')] = 0;
                stk.pop();
            }
            stk.push(s[i]);
        }
        string ans = "";
        while (!stk.empty()) {
            ans.push_back(stk.top());
            stk.pop();
        }
    }
        reverse(ans.begin(), ans.end());
        return ans;
            if (vis[s[i] - 'a'])continue;
        for (int i = 0; i < n; i++) {
        }
            lo[(s[i] - 'a')] = i;
        
