class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][10] = {};
        bool col[9][10] = {};
        bool boxes[9][10] = {};

        for(int r = 0; r <= 8; r++){
            for(int c = 0; c <= 8; c++){
                if(board[r][c] == '.'){
                    continue;
                }

                int cell = board[r][c] - '0';
                int index = (r / 3) * 3 + (c / 3);

                if(row[r][cell] || col[c][cell] || boxes[index][cell]){
                    return false;
                }

                row[r][cell] = true;
                col[c][cell] = true;
                boxes[index][cell] = true;
            }
        }
        return true;
    }
};
