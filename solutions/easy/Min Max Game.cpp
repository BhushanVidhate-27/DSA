// Title: Min Max Game
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/min-max-game/

        int n = nums.size();
        if(n==1)return nums[0];
        while(n > 1) {
            vector<int>newArr(n/2);
        }
            for(int i=0; i<newArr.size(); i++) {
                    newArr[i] = min(nums[2 * i], nums[2 * i + 1]);
            }
                if(i%2 == 0) {
                }else {
                    newArr[i] = max(nums[2 * i], nums[2 * i + 1]);
                }
            if(newArr.size() == 1)return newArr[0];
        return -1;
    int minMaxGame(vector<int>& nums) {
public:
            n = n/2;nums = newArr;
    }
};
