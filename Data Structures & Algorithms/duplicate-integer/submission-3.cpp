#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size() == 0) {
            return false;
        }
        
        std::unordered_set<int> seen;

        for(auto num : nums) {
            if(seen.count(num) == 1) {
                return true;
            }
            seen.insert(num);
        }
        return false;

    }
};