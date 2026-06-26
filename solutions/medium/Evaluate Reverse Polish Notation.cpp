// Title: Evaluate Reverse Polish Notation
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/evaluate-reverse-polish-notation/

                int ans;
                if (x == "+") {

                    ans = a + b;
                } else if (x == "-") {
                    ans = a - b;
                } else if (x == "*") {
                    ans = a * b;
                } else if (x == "/") {
                    ans = a / b;
                }
                s.push(ans);
                s.pop();
                int a = s.top();
                s.pop();
                int b = s.top();
            if ((x == "+" || x == "-" || x == "*" || x == "/") && (!s.empty())) {
        for (auto& x : tokens) {
        stack<int> s;
                s.push(stoi(x));
            }
            } else {
        }
