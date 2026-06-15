// Title: Length of Last Word
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/length-of-last-word/

        int n = s.size();
        if(n == 1)return n;
        reverse(s.begin(), s.end());
        int i = 0;
        int cnt = 0;
        while(i < n && s[i] == ' ') i++;
        while(i < n && s[i] != ' '){
            cnt++;
        }
        return cnt;
    }
            i++;
};
