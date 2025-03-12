class Solution {
public:
    bool isValid(vector<vector<char>>& board, int r, int c, char ch){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][c] == ch) return false;
                if(board[r][j] == ch) return false;
                if(board[3*(r/3) + i/3][3*(c/3)+i%3] == ch) return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board){
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                if(board[r][c] == '.'){
                    for(char ch='1'; ch<='9';ch++){
                        if(isValid(board, r, c, ch)){
                            board[r][c] = ch;
                            if(solve(board) == true) return true;
                            else board[r][c] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};