// Title: Network Recovery Pathways
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/network-recovery-pathways/

        int res = -1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(find(mid, adj, online, topoSort, k)){
                res = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        return res;
    }
};
