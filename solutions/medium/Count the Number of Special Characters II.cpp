// Title: Count the Number of Special Characters II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/count-the-number-of-special-characters-ii/

                firstUpper[c - 'A'] = i;
        }

        int ans = 0;

        for(int i = 0; i < 26; i++) {
            if(lastLower[i] != -1 &&
               firstUpper[i] != -1 &&
               lastLower[i] < firstUpper[i]) {
                ans++;
            }
        }

        return ans;
    }
};
