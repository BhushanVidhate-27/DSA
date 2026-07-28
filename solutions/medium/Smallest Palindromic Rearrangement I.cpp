// Title: Smallest Palindromic Rearrangement I
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/smallest-palindromic-rearrangement-i/

        reverse(r.begin(), r.end());

        r = r.substr(0, m);
        string r = s;
        string l = s;//take first n/2 char
        }
            return s;
            sort(s.begin(), s.end());
        if(s.size() == 2) {
        if(s.size() == 1)return s;
        int m = floor(s.size()/2);
        l = l.substr(0, m);
        sort(r.begin(), r.end(), greater<char>());
        sort(l.begin(), l.end());

        if (s.size() % 2 == 0)
            return l + r;
        else
            return l + s[m] + r;
    }
