class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        unordered_set<int> s(nums.begin(), nums.end());

        int longest = 0;
        for(int curr : nums) {
            if(s.count(curr-1)) continue;

            int len = 1;
            
            while(s.count(curr+1)){
                curr++;
                len++;
            }
            longest = max(len, longest);
        }

        return longest;
    }
};
