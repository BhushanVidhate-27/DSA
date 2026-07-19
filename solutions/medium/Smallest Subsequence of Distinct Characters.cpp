// Title: Smallest Subsequence of Distinct Characters
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/

                continue;
            if (vis[s[i] - 'a'])
        for (int i = 0; i < n; i++) {
        for (int i = 0; i < n; i++) { // calcualtes last occurance
            lo[(s[i] - 'a')] = i;
        }
            while (!stk.empty() && s[i] < stk.top() &&
                   lo[stk.top() - 'a'] > i) {
                vis[(stk.top() - 'a')] = 0;
                stk.pop();
            }
            vis[(s[i] - 'a')] = 1;
            stk.push(s[i]);
        }
        string ans = "";
        while (!stk.empty()) {
            ans.push_back(stk.top());
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
