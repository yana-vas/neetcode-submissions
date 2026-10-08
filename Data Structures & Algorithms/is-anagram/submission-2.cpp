class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        int sCount[26] = {0};
        for(auto &c : s) {
            ++sCount[c - 'a'];
        }

        for(auto &c : t) {
            if(--sCount[c - 'a'] == -1) return false;
        }
        return true;
    }
};
