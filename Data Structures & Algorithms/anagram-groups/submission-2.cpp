class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> res;
        std::unordered_map<string, vector<string>> groups;

        for(int i = 0; i < strs.size(); i++) {
            string count(26, 0);
            for(auto &l : strs[i]) {
                count[l - 'a']++;
            }

            groups[count].push_back(strs[i]);
        }

        for(auto &pair : groups) {
            res.push_back(pair.second);
        }
        return res;
    }
};
