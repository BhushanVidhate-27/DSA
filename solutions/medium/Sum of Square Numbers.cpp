// Title: Sum of Square Numbers
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/sum-of-square-numbers/

public:
    bool judgeSquareSum(int c) {
        ll st = 0;
        ll end = sqrt(c);
        while(st <= end) {
            ll sqs = (st*st) + (end*end);
        }

            if(sqs == c)return 1;
            if(sqs > c) {
                end--;
            }else {
                st++;
            }
        return 0;
    }
};
