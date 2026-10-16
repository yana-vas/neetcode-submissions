class Solution {
public:
    bool isPalindrome(string s) {
        string clean_string;
        for (char c : s){
            if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
                if(c >= 'A' && c <= 'Z') c+='a' - 'A';
                clean_string += c;
            }
        }

        int len = clean_string.size();
        for(int i = 0; i < len/2; i++) {
            if(clean_string[i] != clean_string[len -1 -i]) return false;
        }

        return true;
    }
};
