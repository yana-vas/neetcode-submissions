class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_pq;

        for(auto &entry : freq) {
            min_pq.push({entry.second, entry.first});
            if(min_pq.size() > k) {
                min_pq.pop();
            }
        }

        vector<int> res;

        for(int i = 0; i < k; i++) {
            res.push_back(min_pq.top().second);
            min_pq.pop();
        }
        return res;
    }
};
