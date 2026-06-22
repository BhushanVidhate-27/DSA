// Title: Maximum Number of Balloons
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-number-of-balloons/

        }
        int m = INT_MAX;
        for(char c: "balon") {
            if(c != 'o' && c != 'l') {
            }else {
            }
                if(c) {
                    m = min(m, freq[c - 'a']);
                }
                if(c) {
                    int f = freq[c - 'a'] / 2;
                    m = min(m, f);
                }
            }
                freq[c - 'a']++;
        }
        return m;
    }
};
