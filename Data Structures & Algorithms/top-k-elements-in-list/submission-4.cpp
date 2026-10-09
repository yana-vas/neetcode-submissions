class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        vector<vector<int>> v(nums.size()+1);

        for(auto &entry : freq) {
            v[entry.second].push_back(entry.first);
        }

        vector<int> res;
        for(int i = v.size()-1; i > 0; i--) {
            for(int num : v[i]){
                res.push_back(num);
                if (res.size() == k) {
                    return res;
                }
            }
        }
        return res;
    }
};
