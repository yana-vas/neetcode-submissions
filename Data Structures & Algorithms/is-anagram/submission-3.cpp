class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        unordered_map<char, int> hash;
        for(auto &c : s) {
            ++hash[c];
        }

        for(auto &c : t) {
            if(--hash[c] == -1) return false;
        }
        return true;
    }
};
