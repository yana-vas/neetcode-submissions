class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for (string &curr_s : strs) {
            res+=to_string(curr_s.size());
            res+="@";
            res+=curr_s;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string curr_s;
        string curr_size;
        int i = 0;
        while(i < s.size()) {
            int at_idx = s.find('@', i);
            int len = stoi(s.substr(i, at_idx-i));
            
            string word = s.substr(at_idx +1, len);
            res.push_back(word);
            i = at_idx + 1 + len;
        }
        return res;
    }
};
