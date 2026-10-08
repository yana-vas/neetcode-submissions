class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { 
        unordered_map<int, int> hash;

        for(int i = 0; i < nums.size(); i++) {
            hash[nums[i]] = i;
        }

        for(int i = 0; i < nums.size(); i++) {
            int curr = nums[i];
            int complement = target - curr;
            if(hash.count(complement) && hash[complement] != i) {
                return {i, hash[complement]};
            }
        }

        return {};


    }
};
