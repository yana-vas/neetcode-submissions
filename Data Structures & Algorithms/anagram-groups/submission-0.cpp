class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> res;
        std::unordered_map<string, vector<string>> groups;

        for(int i = 0; i < strs.size(); i++) {
            string sort_curr = strs[i];
            std::sort(sort_curr.begin(), sort_curr.end());

            groups[sort_curr].push_back(strs[i]);
        }

        for(auto pair : groups) {
            res.push_back(pair.second);
        }
        return res;
    }
};
