class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<pair<int, int>> info;
        for(int i = 0; i < nums.size(); i++) {
            info.push_back({nums[i], i});
        } 

        sort(info.begin(), info.end());
        
        int i = 0;
        int j = nums.size()-1;

        while(i < j) {
            if ((info[i].first + info[j].first) == target) {
                return {min(info[i].second, info[j].second), max(info[i].second, info[j].second)};
            }
            if ((info[i].first + info[j].first) > target) {
                j--;
            }else {
                i++;
            }
        }

    }
};
