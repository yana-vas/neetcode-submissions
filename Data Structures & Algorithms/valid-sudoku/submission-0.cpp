class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        

        vector<unordered_set<int>> rows(9);
        vector<unordered_set<int>> cols(9);
        vector<unordered_set<int>> boxes(9);

        for (int r = 0; r < board.size(); r++) {
            for(int c = 0; c < board[r].size(); c++) {
                if(board[r][c] == '.') continue;
                int box = (r/3)*3 + c/3;
                int val = board[r][c] - '0';
                if(val)
                if(rows[r].count(val) || cols[c].count(val) || boxes[box].count(val)) {
                    return false;
                }
                rows[r].insert(val);
                cols[c].insert(val);
                boxes[box].insert(val);
            }
        }

        return true;
    }
};
