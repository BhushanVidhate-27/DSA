// Title: Weighted Word Mapping
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/weighted-word-mapping/

    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";
        for(auto x: words) {
            int sum = 0;
            for(char c: x) {
        }
                sum += weights[idx];
            }
    }
            char a = 'z' - sum; // z -> 122 == 0
            ans += a;
        return ans;
                int idx = (c - 'a') % 26;
            sum = sum % 26;
};
