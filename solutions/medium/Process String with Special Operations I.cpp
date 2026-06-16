// Title: Process String with Special Operations I
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/process-string-with-special-operations-i/

        string result = "";
        for(int i=0; i<s.size(); i++) {
            if(s[i] >= 97 && s[i] <= 122) {
                result += s[i];
            }else if(s[i] == '*' && result.size() != 0) {
            }else if(s[i] == '#') {
                result.erase(size - 1, size);
                int size = result.size();
                result += result;
            }else{
                reverse(result.begin(), result.end());
            }
    string processStr(string s) {
public:
class Solution {
        }
        return result;
        
    }
