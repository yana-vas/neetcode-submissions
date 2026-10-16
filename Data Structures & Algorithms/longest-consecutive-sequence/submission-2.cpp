class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        unordered_set<int> s(nums.begin(), nums.end());
        

        int res = 0;
        for(int x : s) {

            if(s.count(x-1)) continue;

            int len = 1;
            int curr = x;
            while(s.count(curr+1)) {
                len++;
                curr++;
            }
            res = max(len, res);
        }

        return res;
    }
};
