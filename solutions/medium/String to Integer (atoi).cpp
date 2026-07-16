// Title: String to Integer (atoi)
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/string-to-integer-(atoi)/

            res = res * 10 + digit;
            
            if (sign * res <= INT_MIN) {
                return INT_MIN;
            }
            if (sign * res >= INT_MAX) {
                return INT_MAX;
            }
            
            i++;
        }
        
        // Step 4: Apply sign and return
        return static_cast<int>(res * sign);     
    }
};
