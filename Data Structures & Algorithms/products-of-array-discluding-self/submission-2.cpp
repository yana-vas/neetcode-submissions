class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int prod = 1;
        int null_ctr=0;
        for(auto &num : nums) {
            if(num == 0){
                null_ctr++;
            }
            prod *= num;
        }

        if(null_ctr == 1) {
            prod = 1;
            for(auto &num : nums){
                if(num != 0) prod*=num;
            }
        }
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0) {
                if(null_ctr == 1) {
                    res.push_back(prod);
                    continue;
                }
                res.push_back(0);
                continue;
            }
            if(null_ctr > 0) { 
                res.push_back(0);
                continue;
            }
            int curr_res = prod / nums[i];
            res.push_back(curr_res);
        }
        return res;
    }
};
