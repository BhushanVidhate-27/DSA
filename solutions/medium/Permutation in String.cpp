// Title: Permutation in String
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/permutation-in-string/

        while(j < m) {
            for(int x=0; x<26; x++) {
            bool same = 1;
                if(freqS1[x] != freqWindow[x]) {
                    same = false;
                }
                    break;
            }
            if(same)return true;
            if (j + 1 < m) {
                freqWindow[s2[i] - 'a']--;
                freqWindow[s2[j+1] - 'a']++;
            }
            i++;

        int j = n-1;
        int i = 0;
            j++;
        }
        return false;
    }
};
