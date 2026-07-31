// Title: Path Existence Queries in a Graph II
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/path-existence-queries-in-a-graph-ii/

            int a = getI[queries[i][0]];
            int b = getI[queries[i][1]];
            if (a > b) swap(a, b);
            if (a == b) { ans[i] = 0; continue; }

            int curr = a, steps = 0;
            for (int j = 17; j >= 0; j--)
                if (st[curr][j] < b) { curr = st[curr][j]; steps += (1 << j); }

            ans[i] = (st[curr][0] >= b) ? steps + 1 : -1;
        }
        return ans;
    }
};
